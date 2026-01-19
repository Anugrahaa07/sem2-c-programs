#include<stdio.h>
#define pi 3.14
#include<math.h>
void main()
{
    double g,l,t;

    printf("Enter the time 't' : ");
    scanf("%lf",&t);

    printf("Enter the length 'l' : ");
    scanf("%lf",&l);

    g = 4 * pow(pi,2) * (l/pow(t,2));

    printf("The acceleration due to gravity is %lf m/s2",g);


}