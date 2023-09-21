#include "main.h"
#include <stdio.h>
/**
 * _printf - function to print to std out
 * @format: variable for format specifier
 * Return: number of byte printed
 */
int _printf(const char *format, ...)
{
	int j = 0, counter = 0;
	int handled;

	va_list listarg;

	if (format == NULL)
		return (-1);

	va_start(listarg, format);

	while (format[j] != '\0')
	{
		if (format[j] != '%')
		{
			_myputchar(format[j]);
		}
		else if (format[j + 1] != '\0')
		{
			j++;

			handled = handle_spec(format[j], listarg, &counter);

			if (!handled)
			{
				return (-1);
			}
		}
		j++;
		counter++;
	}
	va_end(listarg);
	return (counter);
}
