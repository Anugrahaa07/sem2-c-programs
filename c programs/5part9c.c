#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter x: ");
    scanf("%d",&x);

    y = (x>0)?1:(x==0)?0:-1;
   
    printf("y = %d",y);
    return 0;
}