#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the input character to check
 * Return: 1 if c is lowercase, 0 for uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
