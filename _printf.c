#include "main.h"

/**
 * _printf - function to print to std out
 *
 * @format: variable for format specifier
 * Return: number of byte printed
 */
int _printf(const char *format, ...)
{
	unsigned int j, counter = 0, strcount;
	va_list listarg;
	char *str;

	if (format == NULL)
		return (-1);

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
		else if (format[j + 1] == 's')
		{
			str = va_arg(listarg, char *);
			if (str == NULL)
				return (-1);

			strcount = putstr(str);
			j++;
			counter = counter + (strcount - 1);
		}
		else if (format[j + 1] == '%')
		{
			_myputchar('%');
			j++;
		}
		else if (format[j + 1] == 'd' || format[j + 1] == 'i')
		{
			strcount = _recusive(va_arg(listarg, int), counter);
			j++;
		}
		else
			return (-1);
		j++;
		counter++;
	}
	va_end(listarg);
	return (counter);
}
