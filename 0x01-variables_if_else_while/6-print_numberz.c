#include <stdio.h>
/**
 * main - main function
 * x not i variable assignment
 * Print all numbers of base 10, starting from 0.
 * use `putchar` to print to console and only use `putchar` twice.
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
