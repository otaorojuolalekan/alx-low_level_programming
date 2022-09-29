#include "main.h"

/**
 * find_sqrt - helper function to get natural square root recursively
 * @num: input whose sqrt is checked
 * @q: incremental value
 * Return: root(n) or -1
 */

int find_sqrt(int num, int q)
{
	if (q * q == num)
		return (q);
	if (q * q > num)
		return (-1);
	return (find_sqrt(num, q + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input given
 * Return: root(n) or -1
 */

int _sqrt_recursion(int n)
{
	int check = find_sqrt(n, 0);

	if (n < 0)
		return (-1);
	if (check != -1)
		return (check);
	else
		return (-1);
}
