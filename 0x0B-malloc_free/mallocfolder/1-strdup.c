#include "main.h"

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dupl;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dupl =  malloc(sizeof(char) * (len + 1));

	if (dupl == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dupl[index] = str[index];

	dupl[len] = '\0';

	return (dupl);
}
