#include "main.h"
/**
 * times_table - prints times table from 0 to 9
 * Description: same as above
 * Return: void
 */

void times_table(void)
{
	int n1, n2, result;

	for (n2 = 0; n2 < 10; n2++)
	{
		for (n1 = 0; n1 < 10; n1++)
		{
			result = n1 * n2;
			if (n1 == 0)
			{
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			if !(n1 = 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
