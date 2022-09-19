/**
 * _puts - prints a string of input
 * Description - same as above
 * @str: string input to be printed
 * Return: void
 */

int _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
}
