#include<stdio.h>
int main()
{
    int num[50][50],i,j,n,m;

    printf("Enter the number of rows: ");
    scanf("%d",&m);
    
    printf("Enter the number of coloumns: ");
    scanf("%d",&n);
    
    printf("Enter the number: ");
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
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
