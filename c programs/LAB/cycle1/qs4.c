#include <stdio.h>

int main()
{
    int num[100][100], m, n;
    int i, j, k;
    int saddle = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements in the matrix:\n ");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }

    for(i = 0; i < m; i++)
    {
        int min = num[i][0];
        int col = 0;

        for(j = 1; j < n; j++)
        {
            if(num[i][j] < min)
            {
                min = num[i][j];
                col = j;
            }
        }

        int Saddle1 = 1;

        for(k = 0; k < m; k++)
        {
            if(num[k][col] > min)
            {
                Saddle1 = 0;
                break;
            }
        }

        if(Saddle1)
        {
            printf("Saddle point = %d at position (%d,%d)\n", min, i+1, col+1);
            saddle= 1;
        }
    }

    if(!saddle)
        printf("No saddle point exists\n");

    int largest = num[0][0];
    int second = num[0][0];

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(num[i][j] > largest)
            {
                second = largest;
                largest = num[i][j];
            }
            else if(num[i][j] > second && num[i][j] != largest)
            {
                second = num[i][j];
            }
        }
    }

    printf("Second largest element = %d\n", second);

    return 0;
}