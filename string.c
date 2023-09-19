#include "main.h"

/**
 * print_s - a function that prints a string
 * @args: list of arguments the function takes
 *
 * Return: Void
 */

void print_s(va_list args)
{
	char *s;
	
	if (s == NULL)
	{
		putstr("Failed");
		return;
	}
	s = va_arg(args, char *);
	putstr(s);
}
