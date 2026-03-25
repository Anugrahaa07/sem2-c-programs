#include <stdio.h>
#include <string.h>

int main() {
    char str[200], old[50], neww[50], result[200];
    int i, j = 0, k, found;

    printf("Enter main string: ");
    gets(str);

    printf("Enter word to replace: ");
    gets(old);

    printf("Enter new word: ");
    gets(neww);

    for(i = 0; str[i] != '\0'; i++) {
        found = 1;

        // Check if word matches
        for(k = 0; old[k] != '\0'; k++) {
            if(str[i + k] != old[k]) {
                found = 0;
                break;
            }
        }

        if(found) {
            // Add new word
            for(k = 0; neww[k] != '\0'; k++) {
                result[j++] = neww[k];
            }
            i = i + strlen(old) - 1;
        } else {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("Updated string: %s", result);

    return 0;
}