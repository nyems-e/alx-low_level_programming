#include "function_pointers.h"

/**
 * int_index- search for an integer
 * @array: array
 * @size: number of array elemnts
 * @cmp: comparison function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i = 0;
while (i < size)
{
if (cmp(array[i]))
{
return (i);
}
else if (i == (size - 1))
{
return (-1);
}
i++;
}
}
return (-1);
}
