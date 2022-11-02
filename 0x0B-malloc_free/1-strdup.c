#include "main.h"

/**
 * _strlen - calculate length of input string str
 * @str: input string
 * Return: Length of input String
 */

int _strlen(*str)
{
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

/**
 * _strdup - function returns a pointer to a new string which
 * is a duplicate of the string str.
 * @str: input string to be duplicated
 * Return: NULL if str == NULL, ELSE - a pointer to the new
 * string which is a duplicate of str.
 */

char *_strdup(char *str)
{
	int len = _strlen(str);
	int i;
	char *newstr;

	newstr = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);
	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}
	newstr[i] = '\0';
	return (newstr);
}
