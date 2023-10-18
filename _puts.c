#include "main.h"

/**
 * _puts - print a string on the stdout
 *
 * @str: The string to be printed
 *
 * Return: The length of the string
*/

int _puts(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len += _putchar(str[i]);
	return (len);
}

/**
 * _putchar - puts a char on the screen
 *
 * @ch: a char to be printed
 *
 * Return: 1
*/

int _putchar(char ch)
{
	write(1, &ch, 1);
	return (1);
}	
