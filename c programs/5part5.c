#include<stdio.h>
int main()
{
    float maths,physics,chemistry;

    printf("Enter your marks out of 100 for Maths,Physics and Chemistry: ");
    scanf("%f %f %f",&maths,&physics,&chemistry);

    if(maths>=60 && physics>=50 && chemistry>=40 && maths + chemistry +physics >=200 || maths + physics >=150)
    {
        printf("The student is ELIGIBLE");
    }
    else
    {
        printf("The student is NOT ELIGIBLE");
    }
    return 0;
}