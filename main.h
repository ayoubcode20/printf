#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char);

/* _printf.c module */
int _printf(const char *format, ...);

/* _func.c module */
int print_string(va_list *ap);
int print_int(va_list *ap);

/* _convert.c module */
char *int_to_str(int n);

#endif
