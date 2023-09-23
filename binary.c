#include "main.h"

/**
 * print_binary - a function that returns the binary conversion
 * @args: a list of args
 *
 * Return: the binary conversion
 */

int print_binary(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);

	return (recursive_print_binary(num));
}

/**
 * recursive_print_binary - a function that recursively converts
 * an int to binary
 * @num: number to be converted
 *
 * Return: count
 */
int recursive_print_binary(unsigned int num)
{
	int count;

	/* checks and returns the num if a num enterd is less than or equal to 1 */

	if (num <= 1)
	{
		_myputchar('0' + num);
		return (1);
	}

	count = recursive_print_binary(num / 2);
	_myputchar('0' + num % 2);

	/* Increment the count for this binary digit */
	return (count + 1);
}
