#include "main.h"

/**
 * _printf - function to print to std out
 * @format: variable for format specifier
 *
 * Return: number of byte printed
 */
int _printf(const char *format, ...)
{
	unsigned int j, counter = 0, strcount;
	va_list listarg;

	va_start(listarg, format);

	j = 0;
	while (format[j] != '\0')
	{
		if (format[j] != '%')
		{
			_myputchar(format[j]);
		}
		else if (format[j + 1] == 'c')
		{
			_myputchar(va_arg(listarg, int));
			j++;
		}
		else if (format[j + 1] == '%')
		{
			_myputchar('%');
			j++;
		}
		else if (format[j + 1] == 's')
		{
			strcount = putstr(va_arg(listarg, char *));
			j++;
			counter = counter + (strcount - 1);
		}
		j++;
		counter++;
	}
	va_end(listarg);
	return (counter);
}
