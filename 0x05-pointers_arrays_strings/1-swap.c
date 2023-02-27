#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: int a
 * #include "main.h"
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
