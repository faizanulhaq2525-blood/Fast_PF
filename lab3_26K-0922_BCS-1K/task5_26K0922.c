#include <stdio.h>

int main() {
    float price;

    printf("Enter the price of the item: ");
    scanf("%f", &price);
    printf("The final price is: $%.2f\n", price);

    return 0;
}
