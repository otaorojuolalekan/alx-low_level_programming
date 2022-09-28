#include "main.h"

/**
 * _strlen_recursion - returns the length of input string
 * @s: input string
 * Return: Length of input string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		count = 0;
	else
	{
	count++;
	count = count + _strlen_recursion(s + 1);
	}
	return (count);
}
