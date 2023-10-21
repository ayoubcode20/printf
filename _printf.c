#include "main.h"

/**
 * _printf -  produces output according to a format
 *
 * @format: string format
 *
 * Return: number of bytes printed
*/

int _printf(const char *format, ...)
{
	int len = 0, ch;
	char *str;
	va_list ap;
	va_list copy;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_copy(copy, ap);

	while (*format)
	{
		if (*format != '%')
			len += _putchar(*format);
		else
		{
			format++;
			if (*format == 'c')
			{
				ch = va_arg(ap, int);
				len += _putchar(ch);
			}
			else if (*format == 's')
				len += print_string(&copy);
			else if (*format == '%')
				len += _putchar(*format);
			else if (*format == 'd' || *format == 'i')
				len += print_int(&copy);
		}
		format++;
	}
	va_end(ap);
	va_end(copy);
	return (len);
}
