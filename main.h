#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _myputchar(char c);
int putstr(char *ch);

/**
 * struct printer- struct
 * @format_spec: identifier of type to print(e.g c means char)
 * @print: ptr ro functions that print according to identifier found
 */

typedef struct printer
{
	char *format_spec;
	void (*print)(va_list arg);
} printer_t;

int _printf(const char *format, ...);
void iformat(va_list args, char specifier);
void istring(char *str);
int ichar(int ch);



#endif /* MAIN_H */
