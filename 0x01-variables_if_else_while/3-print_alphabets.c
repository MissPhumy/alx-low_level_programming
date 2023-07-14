#include <stdio.h>
/**
 * main - main function
 * used x not c in variable description
 * use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0 (Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	x = 'A';

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);
}
