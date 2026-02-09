#include <stdio.h>

int main()
{
    int num[5] = {5, 6, 7, 8, 9};
    int low = 0, highest = 4, middle, num1;

    printf("Enter number to search: ");
    scanf("%d", &num1);

    while (low <= highest)
    {
        middle = (low + highest) / 2;

        if (num[middle] == num1)
        {
            printf("The element %d is found at position %d",num1,middle+1);
            return 0;
        }
        else if (num[middle] < num1)
            low = middle + 1;
        else
            highest = middle - 1;
    }

    printf("Not Found");
    return 0;
}
