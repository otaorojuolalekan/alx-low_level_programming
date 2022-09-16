#include <stdio.h>

/**
 * main -  calculate largest prime factor of 612852475143
 *
 * Return: Always (0) success
 */


int main(void)
{
	long int num = 612852475143;
	long int primefact;

	for (primefact = 2; primefact < num; primefact++)
	{
		if (num % primefact == 0)
		{
			num = num / primefact;
		}
	}
	printf("%ld\n", primefact);
	return (0);
}
