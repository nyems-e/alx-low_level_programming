#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char *buffer;

    buffer = create_array(0, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
free(buffer);
return (0);
}
