/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - 4-print_alphabt.c
 * Description: print lowercase alphabets except q&e using putchar
 * Return: Lowercase alphabets then newline
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 101 || ch != 113)
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
