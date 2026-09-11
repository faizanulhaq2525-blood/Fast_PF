#include <stdio.h>

int main() {
    int roll_number;
    int marks;
    float percentage;
    
    printf("Enter a roll number: ");
    scanf("%d", &roll_number);
    printf("Enter marks: ");
    scanf("%d", &marks);
    printf("percentage : ");
    scanf("%f", &percentage);
    
    printf("\n=============================\n");
    printf("      STUDENT REPORT         \n");
    printf("=============================\n");
    printf("Roll Number : %d\n", roll_number);
    printf("Total Marks : %d\n", marks);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("=============================\n");

    return 0;
}
    
