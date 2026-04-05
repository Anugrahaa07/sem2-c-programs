#include <stdio.h>

struct Book {
    char name[20];
    int price;
};

int main() {
    struct Book b;          // Normal structure variable
    struct Book *ptr = &b;  // Pointer pointing to the address of 'b'

    printf("Enter Book Name: ");
    scanf("%[^\n]s", ptr->name);  // No '&' needed for character arrays/strings

    printf("Enter Book Price: ");
    scanf("%d", &ptr->price); // '&' is needed before 'ptr->' for integers

    printf("\nBook Details\n");
    printf("Name: %s\n", ptr->name);
    printf("Price: %d\n", ptr->price);

    return 0;
}