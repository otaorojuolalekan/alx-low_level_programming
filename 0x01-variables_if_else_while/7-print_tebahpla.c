/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - 7-print_tebahpla.c
 * Description: print lowercase alphabets in reverse with  putchar
 * Return: Lowercase alphabets then newline
 */
int main(void)
{
	int ch;

	for (ch = 122; ch <= 97; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
