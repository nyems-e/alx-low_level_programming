#include "main.h"

/**
 * main - program prints its name and new line
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, __attribute__((unused))char *argv[])
{
_putchar(48 + (argc - 1));
_putchar('\n');
return (0);
}
