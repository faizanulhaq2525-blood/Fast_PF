#include <stdio.h>

int main() {
    float units, bill, discount ;
    printf("Enter units consumed: ");
    scanf("%f", &units);
    bill = units * 10;
    if (units < 100) {
        discount = bill * 0.10;
        bill = bill - discount;
        printf("10%% discount applied.\n");
    } else {
        printf("No discount applied.\n");
    }
    printf("Final Bill: %.2f\n", bill);
    return 0;
}
