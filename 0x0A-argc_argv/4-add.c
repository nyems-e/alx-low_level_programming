#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- adding posiive numbers
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
int sum = 0;
int j = 0;
int i;
int num;
char *numStr;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
numStr = argv[i];
for (j = 0; numStr[j] != '\0'; j++)
{
if (!isdigit(numStr[j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(numStr);
if (num <= 0)
{
printf("Error\n");
return (1);
}
sum = sum +  num;
}
printf("%d\n", sum);
return (0);
}

