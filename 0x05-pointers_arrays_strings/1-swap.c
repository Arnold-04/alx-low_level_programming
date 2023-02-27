#include <stdio.h>

/**
 * swap_int - swaps the values of two int
 * @a: the first int
 * @b: the second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
