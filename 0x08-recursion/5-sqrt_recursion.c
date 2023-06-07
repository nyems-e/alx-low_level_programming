#include "main.h"

/**
 * _sqrt_recursion- square root of number
 i* @n: squared number
 * Return: int
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
sqrt_search(n, 0, n);
}

/**
 * sqrt_search- binary search of square root
 * @n: squared number
 * @start: beginning of range
 * @end: highest number in range
 * Return: int
 */
int sqrt_search(int n, int start, int end)
{
int mid = 0;
int square = 0;
if (start > end)
{
return (-1);
}
mid = (start + end) / 2;
square = mid *mid;
if (square == n)
{
return (mid);
}
else if (square > n)
{
return (sqrt_search(n, start, mid + 1));
}
else
{
return (sqrt_search(n, mid + 1, end));
}
}

