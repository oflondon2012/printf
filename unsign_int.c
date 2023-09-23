#include "main.h"

/**
 * print_unsign_int - a function that returns the unsigned int
 * @args: list of arg
 *
 * Return: recursive function that prints an unsigned int
 */
int print_unsign_int(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (unsign_int(num));
}

/**
 * unsign_int - a functions that recursively prints unsigned int
 * @num: number to be printed
 *
 * Return: count
 */
int unsign_int(unsigned int num)
{
	int count = 0;

	if (num / 10 != 0)
	{
		count = count + unsign_int(num / 10);
	}
	_myputchar('0' + num % 10);
	return (count + 1);
}
