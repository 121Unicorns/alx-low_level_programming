#include "main.h"
/**
* main - Checks for alphabetic character.
* Description: Checks for alphabetic character.
* Return: Is 0 or 1
*/
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
