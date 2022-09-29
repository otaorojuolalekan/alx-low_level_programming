#include "main.h"

/* create a helper function to confirm divisibility */

/**
 * is_divisible - returns the prime number
 * @num: input
 * @iter: recursion iterable
 * Return: value if prime, else 0
 */

int is_divisible(int num, int iter)
{
	if (num == 1)
		return (0);
	if ((num % iter == 0) && num != iter)
	{
		return (0);
		return (is_divisible(num, iter + 1));
	}
	return (num);

/**
 * is_prime_number - returns 1 if is prime or else 0
 * @n: input required to check
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n == is_divisible(n, 1))
		return (1);
	return (0);
}
