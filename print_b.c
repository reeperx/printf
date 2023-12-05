#include "main.h"

/**
 * print_b - converts to binary
 * @args: arguements
 * Return: int
 */

int print_b(va_list args)
{
	int flag = 0;
	int count = 0;
	int g, w = 1, d;
	unsigned int test = va_arg(args, unsigned int);
	unsigned int t;

	for (g = 0; g < 32; g++)
	{
		t = ((w << (32 - g)) & test);
		if (t >> (31 - g))
			flag = 1;
		if (flag)
		{
			d = g >> (31 - g);
			_putchar(d + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
