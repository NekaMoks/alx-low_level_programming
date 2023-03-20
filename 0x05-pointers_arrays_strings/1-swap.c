#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first value to be provided
 * @b: Seconf parameter to be provided
 * int c: addressed the swapped value will be sent to
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
