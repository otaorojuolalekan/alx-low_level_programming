#include "main.h"
/**
 * print_number - prints number input to stdout using _putchar
 * Description - same as above
 * @n: input to be printed to stdout
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
