#include<stdio.h>
int main()
{
    int num[100],n,num1,i;

    printf("Enter the limit of the array:\n");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        printf("The element %d is at postion %d\n",num[i],i+1);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}