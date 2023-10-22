#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(int);
/* _printf.c module */
int _printf(const char *format, ...);

/* _convert.c module */
char *int_to_str(int x);

#endif
