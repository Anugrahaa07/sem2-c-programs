#include<stdio.h>
void main()
{
    int a;

    printf("Enter a number: ",a);
    scanf("%d",&a);

    if(a%2 == 0)
    {
        printf("NUMBER IS EVEN");
    }
    else
    {
        printf("NUMBER IS ODD",a);
    }
}