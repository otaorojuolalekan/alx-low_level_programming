#include <unistd.h>

/**
 * _putchar - function that writes to stdout
 * @dg: input to be written to stdout
 * Return: dg to stdout
 */

int _putchar(int dg)
{
	write(1, &dg, 1);
	return (dg);
}
