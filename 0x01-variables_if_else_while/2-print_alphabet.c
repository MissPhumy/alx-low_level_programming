#include <stdio.h>
/**
 * main - main function
 * used x for c in char c
 * used `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
