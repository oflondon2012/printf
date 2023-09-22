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
	int (*print)(va_list);
} printer_t;

int print_c(va_list);
int print_s(va_list);
int print_percent(va_list);
int print_int(va_list args);
int print_plus_int(va_list args);
int print_space_int(va_list args);
int _printf(const char *format, ...);

/* gets the function and flag number for format specifiers */

int (*getfuncs(const char *s, int id))(va_list);
int nflags(const char *s, int id);

#endif /* MAIN_H */
