#include "main.h"
/**
* _strcat - Concatenates two strings.
* @src: String that gets added to dest
* @dest: String to append to
* Return: Is new dest string
*/
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
a++;
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
return (dest);
}
