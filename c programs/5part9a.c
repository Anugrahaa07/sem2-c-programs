#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter x: ");
    scanf("%d",&x);

    if(x>=0)
    {
        if(x==0)
        {
            y = 0;
        }
        else{
            y = 1;
        }
    }
    else
    {
        y = -1;
    }
    printf("y = %d",y);
    return 0;
}