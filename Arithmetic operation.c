#include <stdio.h>
int main() {
int num1, num2, choice;
// Display menu
printf("Select operation:\n");
printf("1. Addition (+)\n");
printf("2. Subtraction (-)\n");
printf("3. Multiplication (*)\n");
printf("4. Division (/)\n");
printf("5. Modulus (%%)\n");
// Input from user
printf("Enter your choice (1-5): ");
scanf("%d", &choice);
printf("Enter first number: ");
scanf("%d", &num1);
printf("Enter second number: ");
scanf("%d", &num2);
// Perform operation using switch
switch(choice)
{
case 1:
printf("Result: %d\n", num1 + num2);
break;
case 2:
printf("Result: %d\n", num1 - num2);
break;
case 3:
printf("Result: %d\n", num1 * num2);
break;
case 4:
printf("Result: %d\n", num1 / num2);

break;
case 5:
printf("Result: %d\n", num1 % num2);
break;
default:
printf("Invalid choice.\n");
}
return 0;
}