#include "3-calc.h"
#include <stdio.h>
/**
 * main- main
 * @argc- number of CLI arguments
 * @argv- arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
int (*operation)(int, int);
int result;
int num1;
int num2;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
result = operation(num1, num2);
printf("%d\n",result);
return (0);
}
