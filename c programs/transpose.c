#include<stdio.h>
int main()
{
    int num[50][50],i,j,n,m,temp;

    printf("Enter the number of rows: ");
    scanf("%d",&m);
    
    printf("Enter the number of coloumns: ");
    scanf("%d",&n);
    
    temp==m;
    n==m;
    n==temp;
    printf("Enter the number: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
