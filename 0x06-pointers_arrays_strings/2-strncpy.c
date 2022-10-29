#include "main.h"
/**
* _strncpy - Copies a string
* @src: Original string
* @dest: String copy
* @n: The number of bytes from copied from src.
* Return: Is 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
