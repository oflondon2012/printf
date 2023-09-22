#include "main.h"

/**
 * getfuncs - a helper function that returns needed function
 * @s: the string
 * @id: the index of the element after % symbol
 *
 * This function is called from the _printf after % is encountered
 *
 * Return: Pointer to needed function for the diff specifiers
 * it returns NULL if the char % is not any recognised spec
 */

int (*getfuncs(const char *s, int id))(va_list)
{
	printer_t funcs[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};

	int i = 0, j = 0;

	if (s)
	{
		while (funcs[i].print != NULL)
		{
			if (funcs[i].format_spec[j] == s[id])
			{
				if (funcs[i].format_spec[j + 1] == '\0')
				{
					return (funcs[i].print);
				}
				else
				{
					i--;
					j++;
					id++;
				}
			}
			i++;
		}
	}
	return (NULL);
}
