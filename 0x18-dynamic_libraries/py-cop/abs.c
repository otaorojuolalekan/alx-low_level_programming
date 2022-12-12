#include "main.h"
/**
 * _abs - checks and returns 1 if input is an alphabet
 *@n: input being checked
 * Description: same as above
 * Return: int 1 or 0 or -1
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-n);
}
