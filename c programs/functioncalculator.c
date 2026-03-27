#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int prod(int a,int b);
float divide(float a,float b);
int main()
{
    int a,b,option;
    do{
        printf("Enter which program you want to perform:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                int a,b;
                printf("The sum is %d\n",add(a,b));
                break;
            case 2:
                int e,f;
                printf("The difference is %d\n",sub(a,b));
                break;
            case 3:
                int g,h;
                printf("The product is %d\n",prod(a,b));
                break;
            case 4:
                float i,j;
                printf("The quotient is %f\n",divide(a,b));
                break;
            case 5:
                printf("Thank You!\nExiting the program");
                break;
            default:
                printf("Please try again");
                break;
        }
        
    }while(option != 5);
    return 0;
}
int add(int a,int b)
{
    int c,d;
    printf("Enter 2 numbers :\n");
    scanf("%d %d",&c,&d);
    return(c+d);
}
int sub(int a,int b)
{
    int c,d;
    printf("Enter 2 numbers :\n");
    scanf("%d %d",&c,&d);
    return(c-d);
}
int prod(int a,int b)
{
    int c,d;
    printf("Enter 2 numbers :\n");
    scanf("%d %d",&c,&d);
    return(c*d);
}
float divide(float a,float b)
{
    float c,d;
    printf("Enter 2 numbers :\n");
    scanf("%f %f",&c,&d);
    return(c/d);
}