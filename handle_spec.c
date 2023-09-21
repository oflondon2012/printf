#include "main.h"

/**
 * handle_spec - a function that handles the dispatching the appropriate
 * specifier handler function based on the specifier character passed
 * to thw _print function
 * @specifier: the specifier that points to different data type in c
 * @args: The list of argument passed to the _printf function
 * @counter: number of argument returned/entered in the _printf func
 *
 * Return: 1 on success, 0 on failure
 */

int handle_spec(char specifier, va_list args, int *counter)
{
	if (specifier == 'c')
	{
		handle_char(args, counter);
	}
	else if (specifier == 's')
	{
		handle_strings(args, counter);
	}
	else if (specifier == 'd' || specifier == 'i')
	{
		handle_int(args, counter);
	}
	else if (specifier == '%')
	{
		_myputchar('%');
		(*counter)++;
	}
	else
	{
		return (0);
	}

return (1);
}
