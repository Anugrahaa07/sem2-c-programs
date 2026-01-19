#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;

    printf("Enter the values for a,b and c: ");
    scanf(" %f %f %f",&a,&b,&c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of the triangle is %f",area);
}