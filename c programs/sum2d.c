#include<stdio.h>
int main()
{
    int num[100][100],m,n,p,q,i,j,a[100][100],b[100][100],c[100][100];

    printf("Enter the number of rows and coloumns for array 1: ");
    scanf("%d %d",&m,&n);

    printf("Enter the number of rows and coloumns for array 2: ");
    scanf("%d %d",&p,&q);

    printf("Enter the elements for array 1: ");
    if(m==p && n==q)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements for array 2: ");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}