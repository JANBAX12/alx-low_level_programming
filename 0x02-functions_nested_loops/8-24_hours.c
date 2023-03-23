#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - 24 time counter 
 *
 * Return: Always 0.
 * @i: hour
 * @j: minute
 */
void jack_bauer(void)
{
	int i;
	int j;
	for (i = 0; i < 24; i++)
	{
	for (j = 0; j < 60; j++)
	 printf("%02d:%02d\n", i, j);
	}
}
