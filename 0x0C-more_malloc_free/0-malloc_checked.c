#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b:size of memeory to allocate
 */
void *malloc_checked(unsigned int b)
{
void *mem;
mem = malloc(b);
if (mem == NULL)
{
exit(98);
}
return (mem);
}
