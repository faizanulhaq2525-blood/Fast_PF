#include <stdio.h>

int main() 
{
    int num1, num2;
    int sum, difference, product, remainder;
    float quotient;

    
    printf("Enter 1st integer: ");
    scanf("%d", &num1);
    printf("Enter 2nd integer: ");
    scanf("%d", &num2);

   
	sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2; 
    remainder = num1 % num2;
    
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %.2f\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
