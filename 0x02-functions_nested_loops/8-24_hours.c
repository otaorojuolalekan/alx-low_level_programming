
#include "main.h"
/**
 * jack_bauer - prints time from 00:00 to 23:59
 * Description: same as above
 * Return: int 1 or 0 or -1
 */

void jack_bauer(void)
{
	char i, j, k, l, jrange;

	for (i = '0'; i <= '2'; i++)
	{
		if (i < 2)
			jrange = '9';
		else
			jrange = '3';
		for (j = '0'; j <= jrange; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar(10);
				}
			}
		}
	}
}
