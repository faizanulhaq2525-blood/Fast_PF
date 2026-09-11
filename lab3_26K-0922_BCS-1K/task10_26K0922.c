#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual Interest Rate: ");
    scanf("%f", &rate);

    printf("Enter the Time period: ");
    scanf("%f", &time);


    simple_interest = (principal * rate * time) / 100.0;
    printf("Calculated Interest: %.2f\n", simple_interest);

    return 0;
}
