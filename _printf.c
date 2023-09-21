#include "main.h"
#include <stdio.h>
/**
 * _printf - function to print to std out
 * @format: variable for format specifier
 * Return: number of byte printed
 */
int _printf(const char *format, ...)
{
	unsigned int j = 0, counter = 0, strcount;
	char *str;

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
		else if (format[j + 1] == 'c')
		{
			_myputchar(va_arg(listarg, int));
			j++;
		}
		else if (format[j + 1] == 's')
		{	str = va_arg(listarg, char*);
			if (str == NULL)
				return (-1);
			strcount = putstr(str);
			j++;
			counter = counter + (strcount - 1);
		}
		else if (format[j + 1] == '%')
		{	_myputchar('%');
			j++;
		}
		else if (format[j + 1] == 'd' || format[j + 1] == 'i')
		{
			strcount = _recusive(va_arg(listarg, int), counter);
			j++;
		}
		j++;
		counter++;
	}
	va_end(listarg);
	return (counter);
}
