#include "main.h"

/**
 * _recusive - recursion function
 * @num1: integer number to get
 * @num2: integer number compute
 *
 * Return: The number to output
 */

int _recusive(int num1, int num2)
{
	int div;

	if (num1 == 0)
	{
		return (num2);
	}
	div = num1 / 10;
	num2 = _recusive(div, num2 + 1);
	_myputchar(num1 % 10 + '0');
	return (num2);
}
