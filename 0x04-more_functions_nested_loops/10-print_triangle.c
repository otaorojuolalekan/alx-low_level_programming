#include "main.h"

/**
 * print_triangle - prints a triangle with size followed by new line.
 * Description - same as above
 * @size: input required
 * Return: '#' in a triangle format
 */

void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (spaces = size - i; spaces > 1; spaces--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar(10);
		}
	}
}
