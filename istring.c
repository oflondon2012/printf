#include "main.h"

/**
 * istring - a function that iterates and print a str
 * @str: A pointer to a string
 */

void istring(char *str)
{
	while (*str != '\0')
	{
		ichar((int)(*str));
		str++;
	}
}
