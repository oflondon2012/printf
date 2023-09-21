#include "main.h"
/**
 * ichar - a function that prints an int
 * @ch: the int
 *
 * Return: An int
 */

int ichar(int ch)
{
	return (write(1, &ch, 1));
}
