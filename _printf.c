#include "main.h"
/**
 * _printf - a custom defined function that is smiliar to C printf
 * @format : chracter string that is passed as arg
 * Return: Numbers of char printed excluding null
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, counter = 0, numflags;
	int (*ptr_func)(va_list);

	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	if (!format[i])
		return (0);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			numflags = nflags(format, i + 1);
			i += numflags;
			ptr_func = getfuncs(format, i + 1);

			if (ptr_func == NULL)
			{
				_myputchar('%');
				counter++;
			}
			else
			{
				counter += ptr_func(args);
				i++;
			}
		}
		else
		{
			_myputchar(format[i]);
			counter++;
		}
	}
	va_end(args);
	return (counter);
}
