#include <stdio.h>
int main() {
int num, originalNum, reversedNum = 0, remainder;
// Input the number from the user

printf("Enter an integer: ");
scanf("%d", &num);
originalNum = num; // Store original number for comparison

// Reverse the number
while (num != 0)
{
remainder = num % 10;
reversedNum = reversedNum * 10 + remainder;
num = num / 10;
}
// Check if original number and reversed number are the same
if (originalNum == reversedNum)
{
printf("%d is a Palindrome.\n", originalNum);
}
else {
printf("%d is not a Palindrome.\n", originalNum);
}
return 0;
}