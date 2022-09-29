#include "main.h"

/* raise prototype for find_sqrt helper function */
int find_sqrt(int num, int q);


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input given
 * Return: root(n) or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

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
