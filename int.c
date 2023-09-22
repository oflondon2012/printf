#include "main.h"

/**
 * print_int - a function that prints an int, signed & unsigned
 * @args: list of argument
 *
 * Return: An int
 */
int print_int(va_list args)
{
	int num;
	unsigned int num_1, tmp, i, div = 1, count = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		num_1 = num * -1;
		_myputchar('-');
		count++;
	}
	else
	{
		num_1 = num;
	}

	tmp = num_1;

	while (tmp > 9)
	{
		div = div * 10;
		tmp = tmp / 10;
	}

	for (i = 0; div > 0; div = div / 10, i++, count++)
	{
		_myputchar(((num_1 / div) % 10) + '0');
	}
	return (count);
}

/**
 * print_plus_int - a function that prints a number
 * @args: list of argument
 *
 * Return: int representing count
 */

int print_plus_int(va_list args)
{
	int num;
	unsigned int num_1, tmp, i, div = 1, count = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		num_1 = num * -1;
		_myputchar('-');
		count++;
	}
	else
	{
		num_1 = num;
	}

	tmp = num;

	while (tmp > 9)
	{
		div = div * 10;
		tmp = tmp / 10;
	}

	if (count == 0)
	{
		_myputchar('+');
		count++;
	}
	for (i = 0; div > 0; div = div / 10, i++, count++)
	{
		_myputchar(((num_1 / div) % 10) + '0');
	}
	return (count);
}

/**
 * print_space_int - a function that prints a number
 * @args: list of argument
 *
 * Return: int representing count
 */

int print_space_int(va_list args)
{
	int num;
	unsigned int num_1, tmp, i, count = 0, div = 1;

	num = va_arg(args, int);
	if (num < 0)
	{
		num_1 =  num * -1;
		_myputchar('-');
		count++;
	}
	else
	{
		num_1 = num;
	}

	tmp = num_1;

	while  (tmp > 9)
	{
		div = div * 10;
		tmp  = tmp / 10;
	}

	if (count == 0)
	{
		_myputchar(' ');
		count++;
	}

	for (i = 0; div > 0; div = div / 10, i++, count++)
	{
		_myputchar(((num_1 / div) % 10) + '0');
	}
	return (count);
}
