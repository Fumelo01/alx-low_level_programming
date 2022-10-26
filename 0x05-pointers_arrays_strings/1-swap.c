#include "main.h"



/**
 * swap_int - entry point
 * @a: first pointer variable
 * @b: second pointer variable
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*b = x;
	*a = y;
}
