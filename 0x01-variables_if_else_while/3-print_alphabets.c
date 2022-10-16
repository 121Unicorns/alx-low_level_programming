#include <stdio.h>
/**
* main - Prints the alphabetic in lower and upper case
*
* Description: Prints the alphabetic in lower and upper case
*
* Return: Is 0
*/
int main(void)
{
char c;
/**
* In lowercase
*/
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
/**
*In uppercase
*/
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
