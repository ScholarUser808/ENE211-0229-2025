#include <stdio.h>

int main()
{
    int CorrectPin = 1256;
    int UserPin;

    printf("Please enter your PIN: ");
    scanf("%d", &UserPin);

    if (UserPin < 0)
    {
        printf("Invalid PIN. Enter a positive number.");
    }
    else if (UserPin < 1000)
    {
        printf("PIN has fewer than four digits.");
    }
    else if (UserPin > 9999)
    {
        printf("PIN has more than four digits.\n");
        printf("Wrong PIN. PIN must not exceed 9999.");
    }
    else if (UserPin == CorrectPin)
    {
        printf("Access granted.");
    }
    else
    {
        printf("Access denied.");
    }

    return 0;
}
