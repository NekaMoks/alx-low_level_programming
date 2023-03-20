#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
*/
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
