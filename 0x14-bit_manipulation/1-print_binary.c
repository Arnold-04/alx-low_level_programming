#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63;
	int count = 0;
	unsigned long int newChar;

	for (; i >= 0; i--)
	{
		newChar = n >> i;

		if (newChar & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

