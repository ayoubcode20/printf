#include "main.h"

/**
 * print_str - prints a string
 *
 * @str: the string to print
 *
 * Return: number of bytes printed
*/

int print_str(char *str)
{
	int len = 0;

	while (*str)
		len += _putchar(*str++);
	return (len);
}

/**
 * print_int - prints an integer
 *
 * @x: the integer
 *
 * Return: number of bytes printed
*/

int print_int(int x)
{
	int len = 0;
	char *str = int_to_str(x);

	while (*str)
		len += _putchar(*str++);
	return (len);
}
