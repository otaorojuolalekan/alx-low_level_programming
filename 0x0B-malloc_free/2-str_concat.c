#include "main.h"

/**
 * _strlen - calculate length of input string str
 * @str: input string
 * Return: Length of input String
 */

int _strlen(char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);

	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}


/**
 * str_concat - concatenates strings s1 and s2
 * @s1: string s1
 * @s2: string s2
 * Return: s1 + s2 null terminated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j, k;
	char *_strcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	_strcat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (_strcat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		_strcat[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		k = i + j;
		_strcat[k] = s2[j];
	}
	_strcat[k + 1] = '\0';

	return (_strcat);
}
