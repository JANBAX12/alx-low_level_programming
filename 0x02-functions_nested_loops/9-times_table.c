#include "main.h"
#include <stdio.h>
/**
 * times_table -  9 times table, starting with 0.
 *
 * Return: Always 0.
 */
void times_table(void)
{
    for(int i=0; i<=10; i++) 
    {
        printf("%d\n", i, 9*i);
    }
}

