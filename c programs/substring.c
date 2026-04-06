#include <stdio.h>

int main() {
    char str[100], sub[100];
    int pos, len, i = 0;

    printf("Enter string: ");
    scanf("%s", str); // Using %s is safer than gets()

    printf("Enter starting position: ");
    scanf("%d", &pos);
    
    printf("Enter length to extract: ");
    scanf("%d", &len);

    // We start from pos-1 because array indexing starts at 0
    while (i < len && str[pos - 1 + i] != '\0') {
        sub[i] = str[pos - 1 + i];
        i++;
    }

    sub[i] = '\0'; 

    printf("Extracted string = %s\n", sub);

    return 0;
}