#include "main.h"

char *rot13(char *s)
{
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, c, d;

	for (i = 0; s[i] != '\0'; i++)
		for (c = 0; a[c] != '\0'; c++)
			if (s[i] == a[c])
			{
			s[i] = b[c];
			break;
			}
	return (s);
