#include <stdio.h>

/**
 * function - print_alphabet: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
