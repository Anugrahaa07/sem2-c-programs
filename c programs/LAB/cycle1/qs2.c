#include <stdio.h>

int Largest(int a, int b, int c)
{
    int largest;

    if (a > b)
    {
        if (a > c)
            largest = a;
        else
            largest = c;
    }
    else
    {
        if (b > c)
            largest = b;
        else
            largest = c;
    }

    return largest;
}

int Smallest(int a, int b, int c)
{
    int smallest;

    if (a < b && a < c)
        smallest = a;
    else if (b < c)
        smallest = b;
    else
        smallest = c;

    return smallest;
}

int Average(int a, int b, int c)
{
    float avg;
    int A;

    avg = (a + b + c) / 3.0;
    A = (avg >= 50) ? 1 : 0;   

    printf("Average = %f\n", avg);
    return A;
}

int main()
{
    int m1, m2, m3,avg;
    int largest, smallest, A;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    largest = Largest(m1, m2, m3);
    smallest = Smallest(m1, m2, m3);
    A = Average(m1, m2, m3);

    printf("Largest mark = %d\n", largest);
    printf("Smallest mark = %d\n", smallest);
    printf("The average is = %d\n", avg);

    return 0;
}