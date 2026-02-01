#include<stdio.h>
int main()
{
    int n,i=0,a=0,b=1,c;

    printf("Enter the number of terms required: ");
    scanf("%d",&n);

    while(i<n)
    {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
        i+=1;
    }
    return 0;
}