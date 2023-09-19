#include "main.h"
/**
 * _printf - function to print to std out
 * @format: variable for format specifier
 * Return: number of byte printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, counter = 0;

	printer_t funcs[] = {{"c", print_c}, {"s", print_s}};

	va_start(args, format);
	if (format == NULL && *format == '\0')
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_myputchar('%');
				counter++;
				i++;
			}
			else
			{
				i++;
				while (funcs[j].format_spec)
				{
					if (format[i] == *(funcs[j].format_spec))
					{
						funcs[j].print(args);
						counter++;
						break;
					}
					j++;
				}
			}
		}
		else
		{	_myputchar(format[i]);
			counter++; }
		i++;
	}
	va_end(args);
	return (counter);
}
