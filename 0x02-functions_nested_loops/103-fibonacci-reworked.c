#include <stdio.h>

/**
 * main - first 50 fibonacci numbers
 *
 * Return:  (0)
 */

int main(void)
{
    unsigned long int curr = 1;
    unsigned long int next = 2;
    unsigned long int even_sum = 0;
    
    printf("%lu" ,curr);
    while (next < 4000000)
    {
        if (next % 2 == 0)
        {
            printf(", %lu", next);
            even_sum += next;
        }
        next = next + curr;
        curr = next - curr;
    }
    printf("\nThe sum of even fibonacci numbers less than 4M is %d", even_sum);
    
	return (0);
}
