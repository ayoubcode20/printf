#include "main.h"

/**
 * print_string - prints a string
 *
 * @ap: args list
 *
 * Return: number of bytes printed
*/

int print_string(va_list *ap)
{
	int len;
	char *str = va_arg(*ap, char *);

	if (!str)
		str = "(null)";

	for (len = 0; str[len] != '\0'; len++)
		_putchar(str[len]);
	return (len);
}

/**
 * print_int - prints an integer
 *
 * @ap: args list
 *
 * Return: number of bytes printed
*/

int print_int(va_list *ap)
{
	int n = va_arg(*ap, int);
	char *str = int_to_str(n);

	for (n = 0; str[n]; n++)
		_putchar(str[n]);
	free(str);
	return (n);
}
