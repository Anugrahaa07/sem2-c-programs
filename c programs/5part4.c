#include<stdio.h>
int main()
{
    int i=1,n,marks,above80=0,above60=0,above40=0,below40=0,range81=0,range61=0,range41=0,range0=0;

    printf("Enter the number of students: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
        printf("Enter the marks of the student %d: ",i);
        scanf("%d",&marks);

        if(marks>=0 && marks<=100)
        {
            above80 +=(marks>80);
            above60 +=(marks>60);
            above40 +=(marks>40);
            below40 +=(marks<=40);
            range81 +=(marks>= 81 && marks<=100);
            range61 +=(marks>= 61 && marks<=80);
            range41 +=(marks>= 41 && marks<=60);
            range0 +=(marks>= 0 && marks<=40);
        }
    }
    printf("\nRESULTS\n");
    printf("%d student(s) have more than 80 marks\n",above80);
    printf("%d student(s) have more than 60 marks\n",above60);
    printf("%d student(s) have more than 40 marks\n",above40);
    printf("%d student(s) have less than 40 marks\n",below40);
    printf("There are %d students in the range 81-100\n",range81);
    printf("There are %d students in the range 61-80\n",range61);
    printf("There are %d students in the range 41-60\n",range41);
    printf("There are %d students in the range 0-40\n",range0);

    return 0;
}


