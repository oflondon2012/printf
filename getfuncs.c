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
		{"c", print_c}, {"d", print_int}, {"+d", print_plus_int},
		{" d", print_space_int}, {"s", print_s}, {" +d", print_plus_int},
		{"+ d", print_plus_int}, {"i", print_int},
		{"%", print_percent}, {"+i", print_plus_int},
		{" i", print_space_int}, {" +i", print_plus_int},
		{"+ i", print_plus_int}, {"b", print_binary},
		{"u", print_unsign_int}, {"x", print_hexa},
		{"X", print_HEXA}, {"o", print_octal},
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
