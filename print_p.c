#include "main.h"

/**
 * print_p - prints address
 * @val: argeuments
 * Return: number of chars
 */

int print_p(va_list val)
{
	void *v;
	char *m = "(nil)";
	long int b;
	int l, c;

	v = va_arg(val, void *);
	if (v == NULL)
	{
		for (l = 0; m[l] != '\0'; l++)
			_putchar(m[l]);
		return (l);
	}
	b = (unsigned long int)v;
	_putchar('0');
	_putchar('x');
	c = print_h(b);
	return (c + 2);
}
