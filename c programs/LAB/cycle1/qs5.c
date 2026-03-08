#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100], marks[100], n;
    char name[100][100];
    int i, j, temp;
    char tempname[50];

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Roll No Name Marks: ");
        scanf("%d %s %d",&roll[i],name[i],&marks[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(tempname,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],tempname);

                temp=roll[i]; roll[i]=roll[j]; roll[j]=temp;
                temp=marks[i]; marks[i]=marks[j]; marks[j]=temp;
            }
        }
    }

    printf("\nAlphabetical List:\n");
    for(i=0;i<n;i++)
        printf("%d %s %d\n",roll[i],name[i],marks[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(roll[i] > roll[j])
            {
                temp=roll[i]; roll[i]=roll[j]; roll[j]=temp;

                strcpy(tempname,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],tempname);

                temp=marks[i]; marks[i]=marks[j]; marks[j]=temp;
            }
        }
    }

    printf("\nSorted by Roll Number:\n");
    for(i=0;i<n;i++)
        printf("%d %s %d\n",roll[i],name[i],marks[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(marks[i] < marks[j])
            {
                temp=marks[i]; marks[i]=marks[j]; marks[j]=temp;

                strcpy(tempname,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],tempname);

                temp=roll[i]; roll[i]=roll[j]; roll[j]=temp;
            }
        }
    }

    printf("\nRank List (Marks wise):\n");
    for(i=0;i<n;i++)
        printf("%d %s %d\n",roll[i],name[i],marks[i]);

    return 0;
}