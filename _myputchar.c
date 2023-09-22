#include <unistd.h>

/**
 * _myputchar - returns a char
 * @c: char
 *
 * Return: an int
 */

int _myputchar(char c)
{
	return (write(1, &c, 1));
}
