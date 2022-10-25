#include <stdio.h>
/**
* main - Prints sum of multiples of 3, 5 under 1024.
* Description: Prints sum of multiples of 3, 5 under 1024.
* Return: Is 0.
*/
int main(void)
{
int n, sum;
sum = 0;
for (n = 0; n < 1024; n++)
{
if (n % 3 == 0 || n % 5 == 0)
{
sum += n;
}
}
printf("%d\n", sum);
return (0);
}

