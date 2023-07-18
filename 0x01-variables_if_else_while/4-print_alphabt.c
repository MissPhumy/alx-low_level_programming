#include <stdio.h>
/**
 * main - main function
 * use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0 (Successfu)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
