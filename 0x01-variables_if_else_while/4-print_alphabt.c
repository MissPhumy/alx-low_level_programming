#include <stdio.h>
/**
 * main - main function
 * x not c variable description
 * use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0 (Successfu)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
