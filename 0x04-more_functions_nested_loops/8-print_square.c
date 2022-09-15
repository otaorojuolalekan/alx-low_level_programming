#include "main.h"

/**
 * print_diagonal - prints a square followed by new line.
 * Description - same as above
 * @size: input required
 * Return: '#' in a square format
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
