#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int len_str = 0;

	while (*(s + len_str) != '\0')
		len_str++;
	return (len_str);
}
