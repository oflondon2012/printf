#include "main.h"

/**
 * handle_char- A function that handles char specifier
 * @args: char argument to be passed
 * @count: to count the num of char that have been printed
 *
 */

void handle_char(va_list args, int *count)
{
	_myputchar(va_arg(args, int));
	(*count)++;
}

/**
 * handle_strings - A function that handles strings
 * @args: string to be entered
 * @count: to count the num of char that have been printed
 *
 */

void handle_strings(va_list args, int *count)
{
	char *str;
	int strcount;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		putstr("(null)");
		*count += 6;
	}
	else
	{
		strcount = putstr(str);
		*count += strcount;
	}
}

/**
 * handle_percent - prints '%'
 */

void handle_percent(void)
{
	_myputchar('%');
}

/**
 * handle_int - A function that handle int
 * @args: int to be entered
 * @count: to count the num of char that have been printed
 *
 */

void handle_int(va_list args, int *count)
{
	int num;

	num = va_arg(args, int);
	if (num < 0)
	{
		_myputchar('-');
		*count += 1;
		num = -num;
	}
	*count += _recusive(num, 0);
}
