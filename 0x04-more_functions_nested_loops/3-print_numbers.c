#include "main.h"

/**
 * print_numbers - prints digits 0 through 9
 * Description - same as above
 * Return: 0123456789
 */

void print_numbers(void)
{
	int dg;

	for (dg >= 48; dg <= 57; dg++)
		_putchar(dg);
	_putchar(10);
}
