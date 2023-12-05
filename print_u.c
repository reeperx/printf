#include "main.h"

/**
 * print_u - prints out integers
 * @args: arguements to print integers
 * Return: character numbers printed
 */
int print_u(va_list args)
{
        unsigned int o = va_arg(args, unsigned int);
        int num, last = o % 10, digit, exp = 1;
        int j = 1;

        o = o / 10;
        num = o;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                o = -o;
                last = -last;
                j++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num / 10;
                }
                num = o;
                while (exp > 0)
                {
                        digit = num / exp;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
                        exp = exp / 10;
                        j++;
                }
        }
        _putchar(last + '0');

        return (j);
}
