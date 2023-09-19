#include "main.h"

/**
 * _myputchar - function to write to std out
 *
 * @c: varible to print
 * Return: Always 0 on success
 */

int _myputchar(char c)
{
	return (write(1, &c, 1));
}
