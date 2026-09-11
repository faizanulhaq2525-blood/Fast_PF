#include <stdio.h>

int main() {
    char grade;
    printf("Enter grade (A, B, C, D, F): ");
    scanf(" %c", &grade); 
    switch (grade) {
        case 'A':
            printf("Very Good\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Work Hard\n");
            break;
        case 'D':
            printf("Work Hard\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade!\n");
    }
    return 0;
}
