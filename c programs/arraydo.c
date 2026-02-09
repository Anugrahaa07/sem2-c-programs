#include<stdio.h>
int main()
{
    int num[100],n,i=0;

    printf("Enter the limit of the array:\n");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    do
    {
        scanf("%d",&num[i]);
        printf("The element %d is at postion %d\n",num[i],i+1);
        i++;
    }while(i<n);
    printf("\n");
    i=0;
    do
    {
        printf("%d\n",num[i]);
        i++;
    }while(i<n);
    return 0;
}