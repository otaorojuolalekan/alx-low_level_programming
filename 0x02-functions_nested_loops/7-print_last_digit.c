#include "main.h"
/**
 * print_last_digit - does what the name says
 *@num: input being checked
 * Description: same as above
 * Return: last digit
 */

int print_last_digit(int num)
{
	int last = num % 10;
	int i;

	for (i = 48; i < 58; i++)
	{
		int test = _putchar(i);
		
		if (last == test)
		{
			_putchar(i);
			_putchar(i);
		}
	}
	return (0);
}
