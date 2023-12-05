#include "main.h"

/**
 * print_S - prints long string
 * @val: values
 * Return: printed number of chars
 */

int print_S(va_list val)
{
	char *e;
	int y, z = 0;
	int value;

	e = va_arg(val, char *);
	if (e == NULL)
		e = "(null)";
	for (y = 0; e[y] != '\0'; y++)
	{
		if (e[y] < 32 || e[y] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			z = z + 2;
			value = e[y];
			if (value < 16)
			{
				_putchar('0');
				z++;
			}
			z = z + print_H(value);
		}
		else
		{
			_putchar(e[y]);
			z++;
		}
	}
	return (z);
}
