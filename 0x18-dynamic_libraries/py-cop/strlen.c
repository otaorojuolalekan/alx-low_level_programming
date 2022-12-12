/**
 * _strlen - returns the length of input string
 * Description - same as above
 * @s: input whose length is checked
 * Return: Length of input s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
