#include "main.h"
/**
 *  print_alphabet_x10 - lowercases
 *
 */

void print_alphabet_x10(void)
{
	int a;
	int z;

	for (a = 1; a <= 10; a++)
	{
		for (z = 97; z <= 122; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}

}
