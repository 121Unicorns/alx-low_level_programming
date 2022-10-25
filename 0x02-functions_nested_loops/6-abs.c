#include "main.h"
/**
* _abs -  Computes the absolute value of an integer.
* @ab: ab is a number
* Description: Computes the absolute value of an integer.
* Return: Absolute value of an integer
*/
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
