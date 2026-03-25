#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    // Reverse
    for(i = strlen(str) - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    // Compare
    if(strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}