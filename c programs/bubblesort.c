#include<stdio.h>
int main()
{
    int num[50],i,j,n,temp,max;

    printf("Enter the limit of numbers: ");
    scanf("%d",&n);

    printf("Enter the number: ");
    for(i=0;i<n;i++)
    {
            scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {  
        printf("%d ",num[i]);
    }
    return 0;
}
