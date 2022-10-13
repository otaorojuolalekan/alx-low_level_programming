#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: Indicator for variadic fn - A variable number of paramters to calculate the sum of.
 *
 * Return: 0 If n is 0 or sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int index, sum = 0;

	va_start(params, n);

	for (index = 0; index < n; index++)
		sum += va_arg(params, int);

	va_end(params);

	return (sum);
}
