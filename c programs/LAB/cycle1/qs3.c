//Anugraha Anil
//Register Number - 25102811
//Department of Computer Science(DCS)
#include <stdio.h>
#include <math.h>

#define DIFF 0.00001

int factorial(int n)
{
    int f = 1;
    for(int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

double Sin(double x)
{
    double sum = 0, term;
    int i = 1, sign = 1;

    while(1)
    {
        term = sign * pow(x, i) / factorial(i);
        sum = sum + term;

        if(term < 0)
            term = -term;

        if(term < DIFF)
            break;

        sign = -sign;
        i = i + 2;
    }

    return sum;
}

double Cos(double x)
{
    double sum = 1, term;
    int i = 2, sign = -1;

    while(1)
    {
        term = sign * pow(x, i) / factorial(i);
        sum = sum + term;

        if(term < 0)
            term = -term;

        if(term < DIFF)
            break;

        sign = -sign;
        i = i + 2;
    }

    return sum;
}

double Sum()
{
    double sum = 1, term;
    int n = 2;

    while(1)
    {
        term = pow((1.0/n), n);
        sum = sum + term;

        if(term < DIFF)
            break;

        n++;
    }

    return sum;
}

int main()
{
    double x;

    printf("Enter x in radians: ");
    scanf("%lf", &x);

    printf("Sin(x) = %lf\n", Sin(x));
    printf("Cos(x) = %lf\n", Cos(x));
    printf("Series Sum = %lf\n", Sum());

    return 0;
}