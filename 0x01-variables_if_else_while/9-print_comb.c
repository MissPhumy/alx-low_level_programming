#include <stdio.h>
/**
 * main - main function
 * x for i
 * Print all possible combinations fo single-digit numbers.
 * Numbers separated by commas and a space.
 *  use `putchar` to print to console usec 4 times.
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	}
	putchar('\n');

	return (0);
}
