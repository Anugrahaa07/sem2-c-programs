#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    gets(str);

    do {
        printf("\n1. Length\n2. Reverse\n3. Uppercase\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu", strlen(str));
                break;

            case 2: {
                char rev[100];
                strcpy(rev, str);
                strrev(rev);
                printf("Reversed = %s", rev);
                break;
            }

            case 3:
                printf("Uppercase = %s", strupr(str));
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}