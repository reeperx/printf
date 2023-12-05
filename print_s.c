#include "main.h"

/**
 * print_s - prints a string
 * @val: args
 * Return: the length of a string
 */
int print_s(va_list val)
{
	char *str;
	int j;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (j = 0; j < length; j++)
			_putchar(str[j]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (j = 0; j < length; j++)
			_putchar(str[j]);
		return (length);
	}
}
