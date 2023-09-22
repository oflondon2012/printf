#include "main.h"

/**
 * iformat - a funct that handles format spec
 * @args: a list of arguments
 * @specifier: the identifiers of diff format spec
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
