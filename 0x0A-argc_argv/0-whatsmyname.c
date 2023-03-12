#include "main.h"

/**
 * main - program prints its name and new line
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, char * argv[])
{
int i = 0;
while (argv[0][i] > '\0')
{
_putchar(argv[0][i]);
i++;
}
_putchar('\n');
return (0);
}
