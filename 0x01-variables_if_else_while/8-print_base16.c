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
	char x;
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (x = 'a'; x < 'g'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
