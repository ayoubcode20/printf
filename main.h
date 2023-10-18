#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


#define STR_NULL "(nill)"

/**
 * struct specifeir - specifier struct
 * @sp: The specifeir
 * @f: The associated func
*/
typedef struct specifeir
{
	char *sp;
	int (*f)(va_list, char*);
} sp_t;

/* _printf.c module*/
int _printf(const char *format, ...);

/* _puts.c module */
int _puts(char *str);
int _putchar(char ch);

#endif
