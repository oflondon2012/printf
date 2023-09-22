#include "main.h"
/**
 * ichar - returns a char/int
 * @ch: Int/char
 *
 * Return: an Int
 */

int ichar(int ch)
{
	return (write(1, &ch, 1));
}
