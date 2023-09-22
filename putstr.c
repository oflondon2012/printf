#include "main.h"

/**
 * putstr - print string
 * @ch: the string
 *
 * Return: number of byte
 */

int putstr(char *ch)
{
	int j = 0, counter = 0;

	if (ch)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			_myputchar(ch[j]);
			counter = counter + 1;
		}
	}
	return (counter);
}
