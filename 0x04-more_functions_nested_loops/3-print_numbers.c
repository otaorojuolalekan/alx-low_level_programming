#include "main.h"

/**
 * print_numbers - prints digits 0 through 9
 * Description - same as above
 * Return: 0123456789
 */

void print_numbers(void)
{
	int dg = 48;

	while (dg <= 57)
	{
		_putchar(dg);
		dg++;
	}
	_putchar(10);
}
