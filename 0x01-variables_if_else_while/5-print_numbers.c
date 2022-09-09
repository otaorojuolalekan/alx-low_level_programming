/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - 5-print_numbers.c
 * Description: print numbers 0..9
 * Return: 0123456789
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
