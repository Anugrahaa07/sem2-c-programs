#include<stdio.h>
int main()
{
    float a,b,c,d,m,n,x1,x2;

    printf("We have 2 linear equations of the form:\n1.ax1 + bx2 = m\n2.cx1 + dx2 = n\nWe have to find x1 and x2\n");

    printf("Enter values for a,b,c,d,m and n: ");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&m,&n);

    if (a*d-c*b == 0)
    {
        printf("The denominator is 0,Please re try");
    }
    else
    {
         x1 = (m*d - b*n)/(a*d - c*b);
         x2 = (n*a -m*c)/(a*d - c*b);

         printf("The values for x1 and x2 are %f and %f",x1,x2);
    }
    return 0;
}
