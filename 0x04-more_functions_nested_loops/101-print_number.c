#include "main.h"

int _putchar(char c);

/**
 * print_number - like a hello world
 *
 * @n: params an integer
 *
 * No return
 */


void print_number(int n)
{

	unsigned int new = 0;

	if  (n < 0)
	{
		new = -n;
		_putchar('-');
	}

	else
	{
		new = n;
	}

	if (new / 10)
	{
		print_number(new / 10);
	}

	_putchar((new % 10) + '0');
}
