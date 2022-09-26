#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int var1, var2;

	for (var1 = 0; a[var1][7]; var1++)
	{
		for (var2 = 0; var2 < 8; var2++)
			_putchar(a[var1][var2]);

		_putchar('\n');
	}
}
