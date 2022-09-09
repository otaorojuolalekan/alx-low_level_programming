#include <stdio.h>
/**
 * main -Entry point
 * Description: possible combinations of 2 digits
 * Return: Always zero(0)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a == b || b <= a)
			{
			}
			else
			{
				putchar(a);
				putchar(b);
				if (a == 56 && b == 57)
				{
				}
				else
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
