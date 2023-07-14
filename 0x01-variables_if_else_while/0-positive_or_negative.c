#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - void no arguements, prints random number assigned
 * variable asigned by me is x(not n)
 * Return: Always 0 (Successful exercution)
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	if (x > 0)
		printf("%d is positive\n", x);
	else if (x == 0)
		printf("%d is zero\n", x);
	else if (x < 0)
		printf("%d is negative\n", x);
	return (0);
}
