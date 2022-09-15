#include <stdio.h>

/**
 * main - Fizz-Buzz program for 1 to 100
 * Description - for multiples of three print Fizz instead
 * of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: number or Fizz or Buzz or FizzBuzz depending on condition
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
