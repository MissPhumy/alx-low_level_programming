#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - void no arguements, prints random number assigned
 * Return: Always 0 (Successful exercution)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	if (n == 0)
		printf("%d is zero\n", n);

	else
		printf("%d is negative\n", n);

	return (0);
}
