#include <stdio.h>
int main()
{
char ch;

printf("Enter a character: ");
scanf("%c", &ch);

if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
{
printf("The entered character '%c' is an ALPHABET.\n", ch);
}
else if (ch >= '0' && ch <= '9')
{
printf("The entered character '%c' is a NUMBER.\n", ch);
}
else
{
printf("The entered character '%c' is a SYMBOL.\n", ch);
}
return 0;
}