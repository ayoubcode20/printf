#include "main.h"

/**
 * int_to_str - converts an int to a string
 *
 * @x: the integer
 *
 * Return: the string
*/

char *int_to_str(int x)
{
	int isNeg = 0;
	int n, len = 0;
	char *str;

	if (x < 0)
	{
		isNeg = 1;
		x = -x;
		len++;
	}
	n = x;
	while (n)
	{
		len++;
		n /= 10;
	}
	str = malloc((len + 1) * sizeof(char));

	for (n = 0; n < len; n++)
	{
		str[len - 1 - n] = x % 10 + 48;
		x /= 10;
	}
	return (str);
}
