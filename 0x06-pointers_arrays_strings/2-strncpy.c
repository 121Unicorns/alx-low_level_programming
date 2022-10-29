#include "main.h"
/**
* _strcat - Concatenates two strings.
* @src: String that gets added to dest
* @dest: String to append to
* @n: The number of bytes from src to be appended to dest.
* Return: Is 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (a != n)
{
dest[b] = src[a];
b++;
a++;
if (src[a] == '\0')
{
break;
}
}
while (b != n)
dest[b++] = '\0';
return (dest);
}
