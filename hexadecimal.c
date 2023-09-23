#include "main.h"

/**
 * print_hexa - a function that returns an hexa conversion in small letters
 * @args: list of arg
 *
 * Return: recursive function that converts to hexa
 */
int print_hexa(va_list args)
{
	unsigned int num;

	num = va_arg(args, int);
	return (hexa(num));
}

/**
 * hexa - a functions that recursively converts an int to hexa
 * @num: number to be converted
 *
 * Return: count
 */

int hexa(unsigned int num)
{
	int count = 0, remainder;

	if (num == 0)
		return (0);

	count = count + hexa(num / 16);

	remainder = num % 16;

	if (remainder < 10)
	{
		_myputchar('0' + remainder);
	}
	else
		_myputchar('a' + remainder - 10);

	return (count + 1);
}
