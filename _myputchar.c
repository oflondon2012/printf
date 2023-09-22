#include <unistd.h>

/**
 * _myputchar - returns a char
 * @c: character
 *
 * Return: a int
 */

int _myputchar(char c)
{
	return (write(1, &c, 1));
}
