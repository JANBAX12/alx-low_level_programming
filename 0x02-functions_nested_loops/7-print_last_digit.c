#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return:  the value of the last digit.
 * @i: the last digit
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}

