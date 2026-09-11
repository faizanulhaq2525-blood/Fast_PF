#include <stdio.h>

int main() 
{
    char ch;

    printf("Enter a single character: ");
    scanf("%c", &ch);

    printf("The character is: '%c'\n", ch);
    printf("Its ASCII value is: %d\n", ch);

    return 0;
}
