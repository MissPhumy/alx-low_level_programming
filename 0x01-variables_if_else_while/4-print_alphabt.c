#include <stdio.h>
/**
 * main - main function
 * x not c variable description
 * use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0 (Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
			putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
