#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal by repeating '\' nX
 * Description - same as above
 * @n: input required
 * Return: ' \' nX
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
					_putchar(' ');
				else
					_putchar(92);
			}
			_putchar(10);
		}
	}
}
