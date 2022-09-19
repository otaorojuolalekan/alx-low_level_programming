#include "main.h"
/**
 * puts2 - prints every other character of a string
 * Description - same as above
 * @str: string input to be printed
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
