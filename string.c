#include "main.h"

/**
 * print_s - a function that prints a string and also
 * count the character
 * @args: list of arguments the function takes
 *
 * Return: count
 */

int print_s(va_list args)
{
	char *s;
	int i;
	char n[] = "(null)";

	s = va_arg(args, char *);

	if (s == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
		{
			_myputchar(n[i]);
		}
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_myputchar(s[i]);
	}
	return (i);
}
