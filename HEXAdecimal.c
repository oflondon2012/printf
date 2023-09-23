#include "main.h"

/**
 * print_HEXA - a function that returns an hexa conversion in capital letters
 * @args: list of arg
 *
 * Return: recursive function that converts to hexa
 */
int print_HEXA(va_list args)
{
	unsigned int num;

	num = va_arg(args, int);
	return (HEXA(num));
}

/**
 * HEXA - a functions that recursively converts an int to hexa
 * @num: number to be converted
 *
 * Return: count
 */

int HEXA(unsigned int num)
{
	int count = 0, remainder;

	if (num == 0)
		return (0);

	count = count + HEXA(num / 16);

	remainder = num % 16;

	if (remainder < 10)
	{
		_myputchar('0' + remainder);
	}
	else
		_myputchar('A' + remainder - 10);

	return (count + 1);
}
