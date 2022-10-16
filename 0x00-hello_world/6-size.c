#include <stdio.h>

/**
* main - prints the sizes of different data types
*
* Description: prints the sizes of different data types
*
* Return: Is 0
*/

int main(void)
{
printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (int) sizeof(float));
return (0);
}
