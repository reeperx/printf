#include "main.h"

/**
 * strlen - Returns the length of a string
 * @str: string pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		;
	return (1);
}
/**
 * _strleng - strlen function but applied for the const char pointer str
 * @str: character pointer
 * Return: 1
 */
int _strleng(const char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		;
	return (1);
}
