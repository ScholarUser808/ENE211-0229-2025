#include <stdio.h>

int main() {
    int num1, num2;

    // Input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display results
    printf("\n--- Calculator Results ---\n");

    printf("Addition:       %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction:    %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // Division
    if (num2 != 0) {
        printf("Division:        %d / %d = %.2f\n",
               num1, num2, (float)num1 / num2);

        printf("Modulus:         %d %% %d = %d\n",
               num1, num2, num1 % num2);
    } else {
        printf("Division:        Cannot divide by zero.\n");
        printf("Modulus:         Cannot find modulus by zero.\n");
    }

    return 0;
}
