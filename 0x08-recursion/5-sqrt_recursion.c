#include "main.h"

/**
 * _sqrt_recursion- square root of number
 * @n: squared number
 * Return: int
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}



}


int sqrt_search(int n, int start, int end)
{
int mid = 0;
int square = 0;
if (start > end)
{
return (-1);
}
int mid = (start + end)/ 2
int square = mid * mid;
if (square == n)
{
return (mid);
}
else if(square > n)
{
return sqrt_search(n, start, mid + 1);
}
else
{

