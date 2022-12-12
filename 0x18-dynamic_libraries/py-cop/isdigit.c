/**
 * _isdigit - checks if input is a digit or not
 * Description - same as above
 * @c: input to be checked
 * Return: 0 if not digit or 1 if digit
 */

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
