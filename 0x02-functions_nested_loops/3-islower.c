#include "main.h"
/**
 * _islower - Shows 1 if the input is a
 * lowecase character.  Another cases, shows
 * 0
 * @c:  input character
 * Return: 1 for lowercase , Return 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
