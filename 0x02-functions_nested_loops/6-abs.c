#include "main.h"
#include <stdio.h>
/**
 * _abs - absolute value of an integer.
 *
 * Return: Always 0.
 *@i: input integer
 */
int _abs(int i)
{
	if (i < 0)
		printf("%d\n", i * -1);
	else
		printf("%d\n", i);
	return (0);
}

