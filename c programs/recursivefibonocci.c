#include<stdio.h>
int fib(int a,int b,int c,int n)
{
    int d=0,e=1,f,i;
    while(i>0)
    {
        f=d+e;
        printf("%d",f);
        d=e;
        e=f;
        i--;
        return f;
    }
}
int main()
{
    int d=0,e=1,f,i;
    printf("How much terms do you want: ");
    scanf("%d",&i);
    printf("The fibonocci series");
    printf("%d\t%d",d,e);
    printf("\t%d",fib(d,e,f,i));
    return 0;
}