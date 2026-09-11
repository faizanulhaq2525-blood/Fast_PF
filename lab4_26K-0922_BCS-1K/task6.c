#include <stdio.h>

int main() {
    float n1, n2, result;
    char op;
    printf("Enter first number: ");
    scanf("%f", &n1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  
    printf("Enter second number: ");
    scanf("%f", &n2);
    switch (op) {
        case '+':
            result = n1 + n2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = n1 - n2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = n1 * n2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
