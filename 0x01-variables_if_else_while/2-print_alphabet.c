#include <stdio.h>
/**
 * main - main function
 * used c for variable name
 * used `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
