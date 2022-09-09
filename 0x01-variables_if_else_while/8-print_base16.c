/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - 6-print_numberz.c
 * Description: print numbers 0..9 using putchar
 * Return: 0123456789
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (num = 97; num <= 102; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
