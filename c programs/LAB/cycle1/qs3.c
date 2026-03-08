#include <stdio.h>
#include <math.h>
#define diff 0.00001

long factorial(int n)
{
    long fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

double Sin(double x)
{
    double term, sum = 0, prev;
    int i = 1, sign = 1;

    do
    {
        prev = sum;
        term = pow(x, i) / factorial(i);
        sum = sum + sign * term;

        sign = -sign;
        i = i + 2;

    } while(fabs(sum - prev) >= diff);

    return sum;
}

double Cos(double x)
{
    double term, sum = 1, prev;
    int i = 2, sign = -1;

    do
    {
        prev = sum;
        term = pow(x, i) / factorial(i);
        sum = sum + sign * term;

        sign = -sign;
        i = i + 2;

    } while(fabs(sum - prev) >= diff);

    return sum;
}

double Sum()
{
    double sum = 1, prev, term;
    int n = 2;

    do
    {
        prev = sum;
        term = pow((1.0/n), n);
        sum = sum + term;
        n++;

    } while(fabs(sum - prev) >= diff);

    return sum;
}

int main()
{
    double x;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);

    printf("\nSin(x) = %lf", Sin(x));
    printf("\nCos(x) = %lf", Cos(x));
    printf("\nSeries Sum = %lf", Sum());

    return 0;
}