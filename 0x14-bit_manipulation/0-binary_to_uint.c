#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0, base_two = 1;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;

	len--;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] == '1')
		{
			result += base_two;
		}

		base_two *= 2;
		len--;
	}

	return (result);
}
