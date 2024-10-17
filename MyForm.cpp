#include "MyForm.h"
#include<cmath>
#include <cstdlib> 
#include <time.h> 

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] //Атрибут для main
int main(array<String^>^ args) //^ - вместо delete
{
    Application::SetCompatibleTextRenderingDefault(false); //Обработа текста
    Application::EnableVisualStyles(); //Обработка визуальных стилей 
    ITsignal::MyForm form; //Обращение к классу и создание элемента form
    Application::Run(% form); // Обращение к методу Run, передача по ссылке form

}

//-------------класс комплексных чисел---------------------------------------------------
class cmplx {
public:
    double re;
    double im;

    cmplx() { re = im = 0.; }
    cmplx(double x, double y) { re = x; im = y; }
    cmplx& operator = (cmplx&);
    friend cmplx operator * (cmplx& x, cmplx& y);
    friend cmplx operator / (cmplx& x, cmplx& y);
    friend cmplx operator / (cmplx& x, double y);
    friend cmplx operator + (cmplx& x, cmplx& y);
    friend cmplx operator - (cmplx& x, cmplx& y);
};

cmplx operator * (cmplx& x, cmplx& y)
{
    cmplx z;
    z.re = x.re * y.re - x.im * y.im;
    z.im = x.re * y.im + y.re * x.im;
    return z;
}

cmplx operator / (cmplx& x, cmplx& y)
{
    cmplx z;
    double y2 = y.re * y.re + y.im * y.im;
    if (y2 < 10e-40)  return z;
    z.re = (x.re * y.re + x.im * y.im) / y2;
    z.im = (y.re * x.im - x.re * y.im) / y2;
    return z;
}

cmplx operator / (cmplx& x, double y)
{
    cmplx z;
    if (y < 10e-40)  return z;
    z.re = x.re / y;
    z.im = x.im / y;
    return z;
}

cmplx operator + (cmplx& x, cmplx& y)
{
    cmplx z;
    z.re = x.re + y.re;
    z.im = x.im + y.im;
    return z;
}

cmplx operator - (cmplx& x, cmplx& y)
{
    cmplx z;
    z.re = x.re - y.re;
    z.im = x.im - y.im;
    return z;
}

cmplx& cmplx::operator = (cmplx& c)
{
    re = c.re;
    im = c.im;
    return *this;
}

//-------------------------- Быстрое фурье преобразование   is=  -1 -prjamoe  +1 -obratnoe
void fourea(long v_size, cmplx* F, double is)
{
    cmplx  temp, w, c;
    long i, i1, j, j1, istep;
    long m, mmax;
    long n = v_size;
    double fn, r1, theta;
    fn = (double)n;
    double r = M_PI * is;
    j = 1;
    for (i = 1; i <= n; i++)
    {
        i1 = i - 1;
        if (i < j)
        {
            j1 = j - 1;
            temp = F[j1];
            F[j1] = F[i1];
            F[i1] = temp;
        }
        m = n / 2;
        while (j > m) { j -= m;	m = (m + 1) / 2; }
        j += m;
    }
    mmax = 1;
    while (mmax < n)
    {
        istep = 2 * mmax;
        r1 = r / (double)mmax;
        for (m = 1; m <= mmax; m++)
        {
            theta = r1 * (double)(m - 1);
            w = cmplx(cos(theta), sin(theta));
            for (i = m - 1; i < n; i += istep)
            {
                j = i + mmax;
                c = F[j];
                temp = w * c;
                F[j] = F[i] - temp;
                F[i] = F[i] + temp;
            }
        }
        mmax = istep;
    }
    if (is > 0)  for (i = 0; i < n; i++) { F[i].re /= fn;  F[i].im /= fn; }
    return;
}


double Es = 0.0, En = 0.0, b = 0.0, Esum = 0.0;
int porog1 = 0;

void ITsignal::MyForm:: Function()
{
   // this->chart_signalEnter->Series[0]->Points->Clear();
    //this->chart_spectr->Series[0]->Points->Clear();

    signalEnter = new double[N + 1];
    cmplx* spectr = new cmplx[N + 1];
    ni = new double[N + 1];

    for (int i = 0; i < N; i++)
    {
        textBox_chastDiskret->Text = Convert::ToString(chastDiskret);
        double t = i / chastDiskret;
        signalEnter[i] = A1 * sin(2 * M_PI * f1 * t + faza1) + A2 * sin(2 * M_PI * f2 * t + faza2) + A3 * sin(2 * M_PI * f3 * t + faza3);
        this->chart_signalEnter->Series[0]->Points->AddXY(t, signalEnter[i]);
        this->chart_signalExit->Series[0]->Points->AddXY(t, signalEnter[i]);
    }

    for (int i = 0; i < N; i++)
    {
        ni[i] = SumN12();
        double Es1 = pow(abs(signalEnter[i]), 2);
        Es += Es1;
        double En1 = pow(abs(ni[i]), 2);
        En += En1;
        /*Ecur = (pow(abs(signalEnter[i]), 2) + pow(abs(signalEnter[N - i]), 2));
        
        Esum = Es1 + En1;
        if (Ecur > gumma*Esum) porog1 = i;*/
    }
    
    n1 = new double[N+1];
    shum = new double[N + 1];
    b = sqrt(alf*Es/En);

    for (int i = 0; i < N; i++)
    {
        n1[i] = b * ni[i];


        shum[i] = signalEnter[i] + n1[i];
        double t = i / chastDiskret;
        this->chart_signalEnter->Series[1]->Points->AddXY(t, shum[i]);
        //this->chart_signalEnter->Series[1]->Points->AddXY(t, n1[i]);

    }

    for (int i = 0; i < N; i++)
    {
        spectr[i] = cmplx(shum[i], 0.0);
    }

    fourea(N, spectr, -1);

    cmplx* spectr_noise = new cmplx[N + 1];
    for (int i = 0; i < N; i++) {
        spectr_noise[i] = cmplx(n1[i], 0.0);
    }

    // Применяем Фурье-преобразование к шумовому сигналу
    fourea(N, spectr_noise, -1);

    double* magnitude_noise = new double[N + 1];
    for (int i = 0; i < N; i++) {
        magnitude_noise[i] = sqrt(spectr_noise[i].re * spectr_noise[i].re + spectr_noise[i].im * spectr_noise[i].im);
    }

    freq = new double[N + 1];
    magnitude = new double[N + 1];

    double Ecur = 0.0;
    for (int i = 0; i < N; i++)
    {
        freq[i] = i * chastDiskret / N;
        magnitude[i] = sqrt(spectr[i].re * spectr[i].re + spectr[i].im * spectr[i].im);
        this->chart_spectr->Series[0]->Points->AddXY(freq[i], magnitude[i]);
    }
    for (int i = 0; i < N; i++)
    {
        double Es1 = magnitude[i] * magnitude[i];
        double En1 = magnitude_noise[i] * magnitude_noise[i];  // Используем спектр шума
        if (i >= N / 2) {
            Ecur = magnitude[i] * magnitude[i]; // Только один элемент
        }
        else {
            Ecur = magnitude[i] * magnitude[i] + magnitude[N - i] * magnitude[N - i]; // Сумма симметричных элементов
        }

        Esum = Es1 + En1;

        if (Ecur > gumma * Esum) {
            porog1 = i;
        }
    }

    signalRecover = new double[N + 1];
    for (int i = 0; i < N; i++) 
    { 
        double magnitude = 0.0;
        double freq = i * chastDiskret / N;
        if (i >= porog1 && porog1<=N-i) magnitude = 0;
        else magnitude = sqrt(spectr[i].re * spectr[i].re + spectr[i].im * spectr[i].im);
        this->chart_spectr->Series[1]->Points->AddXY(freq, magnitude);
    }
}
   
 
double ITsignal::MyForm::SumN12()
{
   
    double sum = 0;
    for (int i = 0; i < 12; i++)
    {
         double a = rand() % RAND_MAX - 0.5* RAND_MAX;
         sum += a;
    }
    return sum;
}

void ITsignal::MyForm::Default()
{
    A1 = 1; A2 = 5; A3 = 3;
    f1 = 1; f2 = 2; f3 = 5;
    faza1 = 0; faza2 = M_PI * 0.5; faza3 = 0;
    N = 256; chastDiskret = 30;
    alf = 0.2; gumma = 1 / (1+alf);
}

System::Void ITsignal::MyForm::startToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->chart_signalEnter->Series[0]->Points->Clear();
    this->chart_spectr->Series[0]->Points->Clear();

    this->chart_signalEnter->Series[1]->Points->Clear();
  

    if (textBox_A1->Text != "" || textBox_A2->Text != "" || textBox_A3->Text != "" ||
        textBox_f1->Text != "" || textBox_f2->Text != "" || textBox_f3->Text != "" ||
        textBox_faza1->Text != "" || textBox_faza2->Text != "" || textBox_faza3->Text != "" ||
        textBox_N->Text != "" || textBox_alf->Text != "" || textBox_gumma->Text != "")
    {
        A1 = Convert::ToDouble(textBox_A1->Text);
        A2 = Convert::ToDouble(textBox_A2->Text);
        A3 = Convert::ToDouble(textBox_A3->Text);

        f1 = Convert::ToDouble(textBox_f1->Text);
        f2 = Convert::ToDouble(textBox_f2->Text);
        f3 = Convert::ToDouble(textBox_f3->Text);

        faza1 = Convert::ToDouble(textBox_faza1->Text);
        faza2 = Convert::ToDouble(textBox_faza2->Text);
        faza3 = Convert::ToDouble(textBox_faza3->Text);

        chastDiskret = Convert::ToDouble(textBox_chastDiskret->Text);
        N = Convert::ToDouble(textBox_N->Text);

        alf = Convert::ToDouble(textBox_alf->Text);
        gumma = Convert::ToDouble(textBox_gumma->Text);
    }
   
    chart_signalEnter->ChartAreas[0]->AxisX->Minimum = 0;
    chart_signalExit->ChartAreas[0]->AxisX->Minimum = 0;
    chart_spectr->ChartAreas[0]->AxisX->Minimum = 0;

    srand((unsigned int)time(NULL));

    Function();



    delete[] signalEnter;
    delete[] spectr;
    delete[] shum;
    delete[] ni;
    delete[] n1;
    delete[] magnitude;
    delete[] freq;
    delete[] signalRecover;
}
