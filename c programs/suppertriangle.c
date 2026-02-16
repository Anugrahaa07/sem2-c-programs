#include<stdio.h>
int main()
{
    int num[100][100],m,n,i,j;

    printf("Enter the number of rows and coloumns for array : ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements for array 1: ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&num[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<=j)
                {
                    printf("%d\t",num[i][j]);
                }
            }
            printf("\n\t");
        }
    return 0;
}
