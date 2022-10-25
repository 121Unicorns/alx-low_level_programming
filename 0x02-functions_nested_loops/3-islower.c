#include "main.h"
/**
* _islower - Checks for lowercase character.
* @c: c is a character
* Description: Checks for lowercase character.
* Return: Is 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
