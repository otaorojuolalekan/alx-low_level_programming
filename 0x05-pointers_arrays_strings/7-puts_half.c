#include "main.h"
/**
 * puts_half - prints the 2nd half of a string
 * Description - same as above
 * @str: string input to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		for (i /= 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
