#include "main.h"
/**
 * print_last_digit - does what the name says
 *@num: input being checked
 * Description: same as above
 * Return: last digit
 */

int print_last_digit(int num)
{
	num = num % 10;

	if (num < 0)
		num = -num;
	_putchar(num + '0');
	return (num);
}
