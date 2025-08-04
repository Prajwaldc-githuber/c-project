#include <stdio.h>
#include <string.h>

// Function declarations
void reverse(char *str);
int factorial(int n);
int biggest(int a, int b, int c);

int main() {
    char str[100];
    int num, a, b, c;

    // Reverse string input
    printf("Enter a string to reverse: ");
    scanf("%s", str);  // Note: scanf reads until whitespace
    reverse(str);
    printf("Reversed string: %s\n", str);

    // Factorial input
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));

    // Find biggest of 3 numbers
    printf("Enter three numbers to find the biggest: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Biggest of %d, %d, and %d is %d\n", a, b, c, biggest(a, b, c));

    return 0;
}

