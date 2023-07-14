#include <stdio.h>
/**
 * main - main function
 * x for c, a for i
 * Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
