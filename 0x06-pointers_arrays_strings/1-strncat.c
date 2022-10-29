#include "main.h"
/**
* _strcat - Concatenates two strings.
* @src: String that gets added to dest
* @dest: String to append to
* Return: Is 0.
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
