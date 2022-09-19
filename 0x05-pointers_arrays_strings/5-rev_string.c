#include "main.h"
/**
 * rev_string - prints a string of input in reverse
 * Description - same as above
 * @s: string input to be printed in reverse
 * Return: void
 */

void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
