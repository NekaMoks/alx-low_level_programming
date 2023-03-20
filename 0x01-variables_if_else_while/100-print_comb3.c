#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0
*/
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++) /*Prints tens digits*/
	{
		for (ones = '0'; ones <= '9'; ones++) /*Prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones))) /*Eliminates repitition*/

			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8')) /*adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
