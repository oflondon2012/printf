#include "main.h"

/**
 * print_c - a function that prints a single char
 * @arg: list of arguments
 *
 * Return: 1, the number of char printed
 */

int print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_myputchar(c);
	return (1);

}
