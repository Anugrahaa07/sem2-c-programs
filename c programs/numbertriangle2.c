#include <stdio.h>
int main() 
{
    int i,j,n;
    i = 1;
    
    printf("Enter the number of rows you want to print: ");
    scanf("%d",&n);
    while(i<=n)
    {
        j = 1;
        while(j<=i)
        {
            printf("%d",j);
            j = j+1;
        }
         printf("\n");
        i = i+1;
    }
    return 0;
} 