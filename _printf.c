#include "main.h"

/**
 * _printf -  produces output according to a format
 *
 * @format: The format string
 *
 * Return: Number of bytes printed
*/

int _printf(const char *format, ...)
{
	char *str;
	int len, ch;
	va_list ap;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	str = format;

	va_start(ap, format);
	while (*str++)
	{
		if (*str != '%')
		{
			len += _putchar(str[0]);
			continue;
		}
		else
		{
			str++;
			if (*str == 'i' || *str == 'd')
			{
				ch = va_arg(ap, int);
				len += _puts((char *)ch);
			}
			else if (*str == 'c')
			{
				ch = va_arg(ap, char);
				len += _puts((char *)ch);
			}
			else if (*str == 's')
				len += _puts(va_arg(ap, char*));
			else if (*str == '%')
				len += _putchar('%');
		}
	}
	va_end(ap);
	return (len);
}
