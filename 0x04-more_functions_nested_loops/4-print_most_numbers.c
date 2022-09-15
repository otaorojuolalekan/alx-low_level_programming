#include "main.h"

/**
 * print_most_numbers - prints digits 0 through 9 except 2 & 4
 * Description - same as above
 * Return: 01356789
 */

void print_most_numbers(void)
{
	int dg;

	for (dg = 48; dg <= 57; dg++)
	{
		if (dg == 50 || dg == 52)
			continue;
		_putchar(dg);
	}
	_putchar(10);
}
