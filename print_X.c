#include "main.h"

/**
 * print_X - converts to hexa numbers
 * @val: values to be converted
 * Return: counter
 */

int print_X(va_list val)
{
	int k, q = 0;
	int *array;
	unsigned int p = va_arg(val, unsigned int);
	unsigned int l = p;

	while (p  / 16 != 0)
	{
		p = p / 16;
		q++;
	}
	q++;
	array = malloc(sizeof(int) * q);
	for (k = 0; k < q; k++)
	{
		array[k] = l % 16;
		l = l / 16;
	}
	for (k = q - 1; k >= 0; k++)
	{
		if (array[k] > 9)
			array[k] = array[k] + 7;
		_putchar(array[k] + '0');
	}
	free(array);
	return (q);
}
