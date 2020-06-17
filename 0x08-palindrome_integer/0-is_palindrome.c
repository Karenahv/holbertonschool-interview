#include "palindrome.h"
#include <stdio.h>
/**
 * is_palindrome - t checks whether or not a given
 * integer is a palindrome
 * @n: integer
 * Return: 1 or 0
 */
int is_palindrome(unsigned long n)
{
	unsigned long i = 1, n2 = n;

	if (n < 10)
		return (1);

	while (n >= 10)
	{
		i *= 10;
		n = n / 10;
	}

	while (i > 1)
	{
		if (n2 % 10 != n2 / i)
			return (0);
		n2 = (n2 % i) / 10;
		i /= 100;
	}
	return (1);
}
