/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - 2-print_alphabet.c
 * Description: print lowercase alphabets then newline using putchar
 * Return: Lowercase alphabets then newline
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar("\n")
	return (0);
}
