#include "main.h"

/**
 * print-o - prints out octa values
 * @val: arguements
 * Return: octa numbers
 */
int print_o(va_list val)
{
	int k, q = 0;
	int *array;
	unsigned int p = va_arg(val, unsigned int);
	unsigned int l = p;

	while (p  / 8 != 0)
	{
		p = p / 8;
		q++;
	}
	q++;
	array = malloc(sizeof(int) * q);
	for (k = 0; k < q; k++)
	{
		array[k] = l % 8;
		l = l / 8;
	}
	for (k = q - 1; k >= 0; k--)
		_putchar(array[k] + '0');
	free(array);
	return (q);
}
