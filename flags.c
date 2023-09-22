#include "main.h"

/**
 * nflags - gets the number of flags encountered in the function
 * @str: the string (format)
 * @id: the index of char after %
 *
 * This function is called from the _printf function after % is encountered
 * It will return the number of flags it encounters before a format specifier
 *
 * Return: number of flags and specifier, or 0
 */

int nflags(const char *str, int id)
{
	int flags = 0;

	while (str[id] == '+' || str[id] == ' ' || str[id] == '#'
			|| str[id] == '0' || str[id] == '-')
	{
		/* Increment the flags count for each flag encountered */
		flags++;
		id++;
	}

	return (flags);
}
