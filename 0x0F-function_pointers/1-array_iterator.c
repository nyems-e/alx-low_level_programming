#include "function_pointers.h"
#include <stdio.h>

/**
 * arrayy_iterator- iterating over array
 * @array: array
 * @size: size of array
 * action: pointer to function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
unsigned int i = 0;
while (i < size)
{
action(array[i++]);
}
}
}
