#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
*/
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
