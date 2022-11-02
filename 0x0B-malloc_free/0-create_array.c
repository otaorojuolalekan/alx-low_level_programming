#include "main.h"

/**
 * create_array - function that creates an array of chars, ...
 * ... and initializes it with a specific char.
 * @size: Size of array
 * @c: character to be initialized
 * Return: A pointer to the function.
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
