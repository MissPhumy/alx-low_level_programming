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
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
