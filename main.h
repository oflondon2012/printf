#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _myputchar(char c);
int putstr(char *ch);
int _recusive(int num1, int numb2);
int handle_spec(char specifier, va_list args, int *counter);
void handle_char(va_list args, int *);
void handle_strings(va_list args, int *);
void handle_percent(void);
void handle_int(va_list args, int *);
int _printf(const char *format, ...);

#endif /* MAIN_H */
