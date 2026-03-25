#include <stdio.h>

int main() {
    char str[200];
    int i = 0, chars = 0, words = 1, upper = 0, lower = 0;

    printf("Enter a line: ");
    gets(str);

    while(str[i] != '\0') {
        chars++;

        if(str[i] == ' ')
            words++;

        if(str[i] >= 'A' && str[i] <= 'Z')
            upper++;

        if(str[i] >= 'a' && str[i] <= 'z')
            lower++;

        i++;
    }

    printf("Characters = %d\nWords = %d\nUppercase = %d\nLowercase = %d",
           chars, words, upper, lower);

    return 0;
}