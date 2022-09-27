#include <stdio.h>

/**
 * main - sums 3-5_cous - Entry point
 *
 * Return:  (0)
 */

int main(void)
{
	int i = 0;
	int sum = 0;
	int lim = 1024;
	
	for (i = 0; i < lim; i++)
	{
	    if (i % 3 == 0 || i % 5 == 0)
	    {
	        sum += i;
	    }
	}
	printf("%d\n", sum);
	return (0);
}
