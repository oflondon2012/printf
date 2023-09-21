#include "main.h"

/**
 * putstr - print string
 * @ch: the string
 *
 * Return: number of byte
 */

int putstr(char *ch)
{
	int j;

	if (ch)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			_myputchar(ch[j]);
		}
	}
	return (j);
}
