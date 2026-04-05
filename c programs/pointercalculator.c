#include <stdio.h>

int main() {
    float a, b, result;
    float *p1 = &a, *p2 = &b, *res = &result;
    char op;

    printf("Enter calculation int format (numner1 operation number2): ");
    
    scanf("%f %c %f", p1, &op, p2);

    if (op == '+') {
        *res = *p1 + *p2;
    } 
    else if (op == '-') {
        *res = *p1 - *p2;
    } 
    else if (op == '*') {
        *res = (*p1) * (*p2); 
    } 
    else if (op == '/') {
        if (*p2 != 0) {
            *res = *p1 / *p2;
        } else {
            printf("Error: Division by zero\n");
            return 1;
        }
    }

    printf("Result: %.2f\n", *res);

    return 0;
}