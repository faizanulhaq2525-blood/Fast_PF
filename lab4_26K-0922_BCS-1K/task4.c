#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    printf("Enter 3rd number: ");
    scanf("%d", &n3);
    if (n1 < n2) {
        if (n1 < n3) {
            printf("Smallest number is %d\n", n1);
        } else {
            printf("Smallest number is %d\n", n3);
        }
    } else {
        if (n2 < n3) {
            printf("Smallest number is %d\n", n2);
        } else {
            printf("Smallest number is %d\n", n3);
        }
    }
    return 0;
}
