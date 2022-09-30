#include "main.h"

/**
 * main - entry point
 * @argc: Arguments count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int argv1 = atoi(argv[1]);
	int argv2 = atoi(argv[2]);
	int mul = argv1 * argv2;
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mul);
	}
	return (0);
}
