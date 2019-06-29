

#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int *mem_ptr;

    mem_ptr = malloc(1000);
    printf("afasasf \n");

    free(mem_ptr);
    free(mem_ptr);
}

