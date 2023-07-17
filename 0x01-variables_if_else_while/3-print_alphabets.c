#include <stdio.h>
/**
 * main - main function
 * used while loop for lowercase, for loop for uppercase
 * use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
