#include "main.h"

/**
 * istring - prints a string
 * @str: pointer to the string
 */

void istring(char *str)
{
	while (*str != '\0')
	{
		ichar((int)(*str));
		str++;
	}
}
