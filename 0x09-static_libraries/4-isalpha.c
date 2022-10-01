#include "main.h"
/**
 * _isalpha - checks and returns 1 if input is an alphabet
 *@c: input being checked
 * Description: same as above
 * Return: int 1 or 0
 */

int _isalpha(int c)
{
	if ((c > 65 && c < 91) || (c > 97 && c < 123))
		return (1);
	else
		return (0);
}
