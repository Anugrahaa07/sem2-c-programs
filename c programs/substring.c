#include <stdio.h>

int main() {
    char str[100], sub[100];
    int n, i = 0, j = 0;

    printf("Enter string: ");
    gets(str);

    printf("Enter starting position: ");
    scanf("%d", &n);

    while(str[n-1 + i] != '\0') {
        sub[j] = str[n-1 + i];
        i++;
        j++;
    }

    sub[j] = '\0';

    printf("Extracted string = %s", sub);

    return 0;
}