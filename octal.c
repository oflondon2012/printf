#include "main.h"

/**
 * print_octal - a function that converts an int to octal
 * @args: list of arg
 *
 * Return: recursive function that returns an octal value
 */
int print_octal(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_myputchar('0');
		return (1);
	}
	return (octal(num));
}

/**
 * octal - a functions that recursively converts to octal
 * @num: binary to be converted to octal
 *
 * Return: count
 */
int octal(unsigned int num)
{
	 int count = 0;

	if (num == 0)
	{
		return (0);
	}

	count += octal(num / 8);
	_myputchar('0' + num % 8);
	return (count + 1);
}
