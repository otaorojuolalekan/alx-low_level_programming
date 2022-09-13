#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase
 * Description: print_alphabet function solution
 * Return: Always zero(0)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar(10);
}
