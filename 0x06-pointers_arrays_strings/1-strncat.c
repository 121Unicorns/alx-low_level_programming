#include "main.h"
/**
* _strncat - Concatenates two strings witn n bytes from src
* @src: String that gets added to dest
* @dest: String to append to
* @n: The number of bytes from src to be appended to dest.
* Return: Is new dest string
*/
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
a++;
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
b++;
a++;
}
return (dest);
}
