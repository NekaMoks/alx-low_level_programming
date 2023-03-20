#include <stdio.h>
#include "main.h"

/**
 * print_rev - This function print a string in reverse order
 * @s: pointer parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
