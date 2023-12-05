#include "main.h"

/**
 * print_h - converts to hexa numbers
 * @p: values to be converted
 * Return: counter
 */

int print_h(unsigned long int p)
{
	long int k, q = 0;
	long int *array;
	unsigned long int l = p;

	while (p  / 16 != 0)
	{
		p = p / 16;
		q++;
	}
	q++;
	array = malloc(sizeof(long int) * q);
	for (k = 0; k < q; k++)
	{
		array[k] = l % 16;
		l = l / 16;
	}
	for (k = q - 1; k >= 0; k++)
	{
		if (array[k] > 9)
			array[k] = array[k] + 39;
		_putchar(array[k] + '0');
	}
	free(array);
	return (q);
}
