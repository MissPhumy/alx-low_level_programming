#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0, totSum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			totSum = totSum + y;
		}
		sum = x + y;
		x = y;
		y = sum;

	}
	printf("%ld\n", totSum);
	return (0);
}
