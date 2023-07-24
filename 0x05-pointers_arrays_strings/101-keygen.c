#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 402)
	{
		r = rand() % 98;
		if ((c + r) > 402)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (402 - c));
	return (0);
}
