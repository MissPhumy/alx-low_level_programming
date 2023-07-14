#include <stdio.h>
/**
 * main - main function
 * use x not c variable name
 * Print the alphabet in reverse order in lowercase.
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
