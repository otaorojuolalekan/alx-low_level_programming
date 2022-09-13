
#include "main.h"
/**
 * jack_bauer - prints time from 00:00 to 23:59
 * Description: same as above
 * Return: int 1 or 0 or -1
 */

void jack_bauer(void)
{
	char i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		if (i < 2)
		{
			for (j = '0'; j <= '9'; j++)
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
		else
		{
			for (j = '0'; j <= '3'; j++)
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
}
