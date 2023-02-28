#include "main.h"
/**
 * swap_int - main
 * @a : to be  input
 * @b : input
 * Return : a & b
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
