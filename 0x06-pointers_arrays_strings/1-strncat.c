#include "main.h"
/**
* _strcat - Concatenates two strings.
* @src: String that gets added to dest
* @dest: String to append to
* @n: The number of bytes from src to be appended to dest.
* Return: Is 0.
*/
char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int dest_len = 0;
while (dest[index++])
dest_len++;
for(index=0; src[index] && index <n; index++)
{
dest[dest_len] = src[index];
}
return (dest);
}
