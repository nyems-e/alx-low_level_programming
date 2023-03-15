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
int j;
for (i = 0; i < argc; i++)
{
temp = argv[i];
for (j = 0; temp[j] != '\0'; j++)
{
_putchar(temp[j]);
}
_putchar('\n');
}
return (0);
}
