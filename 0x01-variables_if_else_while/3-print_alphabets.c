/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - 3-print_alphabets.c
 * Description: print lowercase alphabets then newline using putchar
 * Return: Lowercase alphabets then newline
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	for (ch = 65; ch <= 90; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
