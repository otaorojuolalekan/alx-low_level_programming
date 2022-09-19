#include <stdio.h>
#include "main.h"
/**
 * print_array - prints the content of array- comma separated
 * Description - same as above
 * @a: name of array
 * @n: size of array given
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
