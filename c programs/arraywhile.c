#include<stdio.h>
int main()
{
    int num[100],n,i=0;

    printf("Enter the limit of the array:\n");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    while(i<n)
    {
        scanf("%d",&num[i]);
        printf("The element %d is at postion %d\n",num[i],i+1);
        i++;
    }
    printf("\n");
    i=0;
    while(i<n)
    {
        printf("%d\n",num[i]);
        i++;
    }
    return 0;
}
