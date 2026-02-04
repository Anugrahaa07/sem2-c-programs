#include<Stdio.h>
int main()
{
    float add,subt,prod,quot,num1,num2;
    int operation;
    printf("Enter 2 numbers: ");
    scanf("%f %f",&num1,&num2);

    printf("Enter your choice of operation to perform\n1.Addition\t2.Subtraction\t3.Multiplication\t4.Division: ");
    scanf("%d",&operation);

    switch(operation)
    {
        case 1:
            add = num1+num2;
            printf("The sum is %f",add);
            break;

        case 2:
            subt = num1-num2;
            printf("The difference is %f",subt);
            break;

        case 3:
            prod = num1 * num2;
            printf("The product is %f",prod);
            break;

        case 4:
            quot = num1/num2;
            printf("The quotient is %f",quot);
            break;

        default:
            printf("Invalid choice");
            break;
    }
    return 0;
}