#include "main.h"
/**
 * iformat - A function that checks for the format spec
 * @args: a list of arg to be entered
 * @specifier: The char pointing to the right format
 */
void iformat(va_list args, char specifier)
{
	if (specifier == 'c')
	{
		_myputchar(va_arg(args, int));
	}
	else if (specifier == 's')
	{
		istring(va_arg(args, char *));
	}
}
