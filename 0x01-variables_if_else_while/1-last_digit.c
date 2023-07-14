#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * variables (a, b) not (n, m)
 * Return: 0 (Sucessful exercution)
 */
int main(void)
{
	int a;
	int b;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	b = a % 10;

	if (b > 5)
		printf("Last digit of %i is %i and is greater than 5\n",
		       a, b);
	else if (b == 0)
		printf("Last digit of %i is %i and is 0\n", a, b);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n",
		       a, b);

	return (0);
}
