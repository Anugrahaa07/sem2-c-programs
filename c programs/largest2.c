#include <stdio.h>

int main() {
    int a, b, c, *p1=&a, *p2=&b, *p3=&c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", p1, p2, p3);
    
    max = *p1;
    if(*p2 > max) max = *p2;
    if(*p3 > max) max = *p3;
    
    printf("Largest: %d\n", max);
    return 0;
}