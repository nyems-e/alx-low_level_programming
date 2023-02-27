#include "main.h"

/**
 * swap_int - swap values
 *
 * @a: pointer 1
 * @b: pointer 2
 */
void swap_int(int *a, int *b)
{
int c = 0;
c = *a;
*a = *b;
*b = c;
}
