#include <stdio.h>
/**
 * main - Entry point for program
 * Return: void but prints The filename of the program being compiled
 */
#define filename __FILE__

int main(void)
{
	printf("%s\n", filename);
	return (0);
}
