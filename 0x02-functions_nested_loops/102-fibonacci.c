#include <stdio.h>
/**
 * main - fibonacci 50
 * Description: fibonacci
 * Return: (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int cur = 1;
	unsigned long int next = 2;

	printf("%lu", cur);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", next);
		next += cur;
		cur = next - cur;
	}
	printf("\n");
	return (0);
}
