#include <unistd.h>

int _putchar(int dg)
{
	write(1,&dg,1);
	return (dg);
}
