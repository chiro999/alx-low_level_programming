#include "main.h"
/**
 * _abs = prints the absolute value of an integer
 * @x: The number to be computed.
 * Return: Absolute value of number or zero
*/

int _abs(int x)
{
	if (x < 0)
	{
	int abNum;
	abNum = x + (-2 * x);
	return (abNum);
	}
	return (x);
}
