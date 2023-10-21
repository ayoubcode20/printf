#include "main.h"

/**
 * int_to_str - convert an int to a string
 *
 * @n: the integer to be converted
 *
 * Return: a string
*/

char *int_to_str(int n)
{
	int len = 0, i;
	int isNeg = 0;
	char *str;

	if (n < 0)
	{
		isNeg = 1;
		len++;
		n = -n;
	}

	i = n;
	while (i)
	{
		len++;
		i /= 10;
	}
	str = malloc((len + 1) * sizeof(char));

	for (i = len - 1; i >= 0; i--)
	{
		str[i] = n % 10 + 48;
		n /= 10;
	}

	if (isNeg)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}
