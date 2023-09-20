#include "main.h"

/**
 * print_c - function to check for c character
 *
 * @arg: argument to check for
 *
 * Return: 
 */
void print_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	_myputchar(c);
}
