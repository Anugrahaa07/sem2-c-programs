//Anugraha Anil
//Register Number - 25102811
//Department of Computer Science(DCS)
#include <stdio.h>
#include <math.h>

#define PI 3.14

double diameter(int x1, int y1, int x2, int y2)
{
    double D;
    D=sqrt((double)pow((x2 - x1),2) + pow((y2 - y1),2));
    return(D);
}

double area(double d)
{
    double AREA,r;
    r = d / 2.0;
    AREA= PI * r * r;
    return(AREA);
}

double perimeter(double d)
{
    double PERIMETER,r;
    r = d / 2.0;
    PERIMETER= 2 * PI * r;
    return(PERIMETER);
}

int main()
{
    int x1, y1, x2, y2;
    double d, a, p;

    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    d = diameter(x1, y1, x2, y2);
    a = area(d);
    p = perimeter(d);

    printf("\nDiameter = %lf", d);
    printf("\nArea = %lf", a);
    printf("\nPerimeter = %lf\n", p);

    return 0;
}