#include <stdio.h>
/**
 * main - main functions
 * i=a, j=b, k=b in this script
 * Print all possible combinations of two digits.
 * Numbersseparated by commas and a space,01 and 10 binary digits.
 * Print only the smallest combination of two digits.
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a % 10; /* singles digit */
		c = a / 10; /* doubles digit */

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		a++;
	}
	putchar('\n');

	return (0);
}
