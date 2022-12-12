/**
 * _isupper - checks if input is lower or not
 * Description - same as above
 * @c: input to be checked
 * Return: 0 if lower or 1 if upper
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
