#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - 1-last_digit.c
 * Description: This program will assign a random number to the \
 variable n each time it is executed
 * Return: n related to 5, 6 and 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
