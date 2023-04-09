#include "main.h"

/**
 * binary_to_unit : function that converts binary number to an unsigned
 * int
 * @b : string of char
 * @return : true
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (!b)
	return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);

}
