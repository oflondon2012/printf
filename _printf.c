#include "main.h"
/**
 * _printf - a custom defined function that is smiliar to C printf
 * @format : chracter string that is passed as arg
 *
 * Return: Numbers of char printed excluding null
 */

int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, *format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			iformat(args, *(++format));
			counter++;
		}
		else
		{
			ichar(*format);
		}
	format++;
	}
	va_end(args);
	return (counter);
}
