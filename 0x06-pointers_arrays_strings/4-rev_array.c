#include"main.h"

/**
 * reverse_array - reverse array of integers
 * @a: an array of integers
 * @n: number of elements in array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int temp;
int i = 0;
while(n <= 0)
{
temp = a[i];
a[i] = a[n-1];
a[n-1] = temp;
i++;
n--;
}
}
