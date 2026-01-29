#include<stdio.h>
int main()
{
    int n, fact = 1, i;

    printf("Enter the number of  which you want to find the factorial of: ");
    scanf("%d",&i);

    n=i;

    while(n>=1)
    {
        fact = fact * n;
        n = n-1;
    }

    printf("The factorial of %d is %d",i,fact);
    return 0;
}
