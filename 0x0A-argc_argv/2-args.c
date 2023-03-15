#include "main.h"

/**
 * main - print all arguments received
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
char *temp;
int i;
for (i = 0; i < argc; i++)
{
char *temp = argv[i];
while (*temp)
{
_putchar(*temp++);
}
_putchar('\n');
}
return (0);
}
