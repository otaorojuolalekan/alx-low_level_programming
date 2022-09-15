#include "main.h"

/**
 * more_numbers - prints digits 0 through 14 ten times
 * Description - same as above
 * Return: 01234567891011121314 x10
 */

void more_numbers(void)
{
	int dg;
	int count = 0;

	while (count < 10)
	{
		for (dg = 0; dg <= 14; dg++)
		{
			if (dg >= 10)
				_putchar(dg / 10 + '0');
			_putchar(dg % 10 + '0');
		}
	_putchar(10);
	count++;
	}
}
