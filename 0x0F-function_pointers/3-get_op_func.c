#include "3-calc.h"

/**
 * get_op_func- get_op_func
 * @s: operator
 * Return: funtion pointer of func with return value int and two parameters of int type
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
};
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
{
return(ops[i].f);
}
i++;
}
return (NULL);
}
