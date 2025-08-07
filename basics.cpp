#include <stdio.h>

int main() {
    int num1 = 20;
    int num2 = 7;
    int result;

    // Addition
    result = num1 + num2;
    printf("Addition: %d + %d = %d\n", num1, num2, result);

    // Subtraction
    result = num1 - num2;
    printf("Subtraction: %d - %d = %d\n", num1, num2, result);

    // Multiplication
    result = num1 * num2;
    printf("Multiplication: %d * %d = %d\n", num1, num2, result);

    // Division (integer division)
    result = num1 / num2;
    printf("Division: %d / %d = %d\n", num1, num2, result);

    // Modulus (remainder)
    result = num1 % num2;
    printf("Modulus: %d %% %d = %d\n", num1, num2, result); // %% to print a literal %

    return 0;
}
