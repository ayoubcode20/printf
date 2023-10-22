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
	int chars_printed = 0, arg;
	char *str;
	va_list ap;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format)
	{
		if (*format != '%')
			chars_printed += _putchar(*format);
		else
		{
			format++;
			if (*format == 'c')
			{
				arg = va_arg(ap, int);
				chars_printed += _putchar(arg);
			}
			else if (*format == '%')
				chars_printed += _putchar(*format);
			else if (*format == 's')
			{
				str = va_arg(ap, char*);
				chars_printed += print_str(str);
			}
			else if (*format == 'i' || *format == 'd')
			{
				arg = va_arg(ap, int);
				str = int_to_str(arg);
				while (*str)
					chars_printed += _putchar(*str++);
			}
		}
		format++;
	}
	va_end(ap);
	return (chars_printed);
}
