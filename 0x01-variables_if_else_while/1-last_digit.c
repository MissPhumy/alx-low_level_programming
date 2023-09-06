#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * variables x - stores last digit
 * Return: 0 (Sucessful exercution)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5){
		printf("Last digit of %i is %i and is greater than 5\n", n, x);
	}
	
	if (x == 0){
		printf("Last digit of %i is %i and is 0\n", n, x);
	}

	if (x > 0 && x != 6){
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
	}

	return (0);
}
