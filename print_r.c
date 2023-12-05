#include "main.h"

/**
 * print_r - prints a string in reverse
 * @val: arguements
 *
 * Return: the string
 */
int print_r(va_list val)
{
	char *m = va_arg(val, char*);
	int j;
	int l = 0;

	if (m == NULL)
		m = "(null)";
	while (m[l] != '\0')
		l++;
	for (j = l - 1; j >= 0; j--)
		_putchar(m[l]);
	return (l);
}
