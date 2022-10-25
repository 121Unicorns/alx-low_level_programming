#include <stdio.h>
#include "main.h"
/**
* add -  Prints all natural numbers from n to 98.
* @n: n is a number
* Description: Prints all natural numbers from n to 98.
* Return: Is void.
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
