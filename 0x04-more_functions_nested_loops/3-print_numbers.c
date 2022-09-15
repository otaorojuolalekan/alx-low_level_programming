/**
 * print_numbers - prints digits 0 through 9
 * Description - same as above
 * Return: 0123456789
 */

void _putchar(void);

void print_numbers(void)
{
	char ch;

	for (ch >= '0'; ch <= '9'; ch++)
		_putchar(ch);
	_putchar(10);
}
