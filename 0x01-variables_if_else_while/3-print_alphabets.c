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
char i;
/**
* In lowercase
*/
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
/**
*In uppercase
*/
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
