#include <unistd.h>
/**
 * _myputchar - a function that prints a char
 * @c: char to be printed
 *
 * Return: An int
 */

int _myputchar(char c)
{
	return (write(1, &c, 1));
}
