#include <stdio.h>
#include <string.h>
int main()
{
    char string[40], string1[20], string2[20];
    printf(" \n Enter a string to be reversed: ");
    scanf("%s", string);
    printf(" \n Reverse of a string: %s ", strrev(string));
    printf(" \n\n Length of a string: %d ", strlen(string));
    printf(" \n\n Enter 2 strings to concat: ");
    scanf("%s%s", string1, string2);
    printf(" \n Concatination of 2 strings: %s ", strcat(string1, string2));
    return 0;
}