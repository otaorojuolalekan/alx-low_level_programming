#include "main.h"

/**
 * more_numbers - prints digits 0 through 14 ten times
 * Description - same as above
 * Return: 01234567891011121314 x10
 */

void more_numbers(void)
{
	int dg, i;
	int count = 0;

	while (count < 10)
	{
		for (dg = 48; dg <= 57; dg++)
		{
			_putchar(dg);
		}
		for (i = 48; i <= 52; i ++)
		{
			_putchar(49);
			_putchar(i);
		}
	_putchar(10);
	count++;
	}
}
