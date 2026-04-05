#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

int main() {
    struct book b1, b2, b3;

    // Reading details for b1, b2, and b3
    struct book *books[] = {&b1, &b2, &b3};
    for(int i = 0; i < 3; i++) {
        printf("Enter title, author, pages, price for book %d:\n", i+1);
        scanf("%s %s %d %f", books[i]->title, books[i]->author, &books[i]->pages, &books[i]->price);
    }

    // Printing details only for b1 and b2
    printf("\nDetails of Book 1: %s, %s, %d, %.2f", b1.title, b1.author, b1.pages, b1.price);
    printf("\nDetails of Book 2: %s, %s, %d, %.2f\n", b2.title, b2.author, b2.pages, b2.price);

    return 0;
}