#include <stdio.h>
/**
* main - Prints the alphabet
*
* Description: Prints the alphabet
*
* Return: Is 0
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}