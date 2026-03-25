#include <stdio.h>

int main() {
    int n, i = 0, choice;
    int sum = 0, product = 1, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input using while loop
    printf("Enter elements:\n");
    while(i < n) {
        scanf("%d", &arr[i]);
        i++;
    }

    // Menu
    printf("\n1. Sum\n2. Product\n3. Search\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: // Sum
            i = 0;
            do {
                sum += arr[i];
                i++;
            } while(i < n);
            printf("Sum = %d", sum);
            break;

        case 2: // Product
            i = 0;
            do {
                product *= arr[i];
                i++;
            } while(i < n);
            printf("Product = %d", product);
            break;

        case 3: // Search
            printf("Enter element to search: ");
            scanf("%d", &key);

            i = 0;
            while(i < n) {
                if(arr[i] == key) {
                    found = 1;
                    break;
                }
                i++;
            }

            if(found)
                printf("Element found at position %d", i + 1);
            else
                printf("Element not found");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}