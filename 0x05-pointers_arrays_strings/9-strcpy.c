#include <stdio.h>
#include "main.h"
/**
 * _strcpy - prints the content of array- comma separated
 * Description - same as above
 * @dest: destination of copy
 * @src: source of string to copy to destination
 * Return: a copy of the string in src to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
