#include "main.h"

/**
 * main - entry point
 * @argc: Arguments count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

		while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
