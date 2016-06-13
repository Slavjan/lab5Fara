#include <stdio.h>
#include <stdlib.h>
#include "output.h"

void output(char *znach, char *filename)
{
    FILE * file = fopen(filename, "a+");

    fprintf(file,"%s\n", znach);
    printf("%s\n", znach);
    fclose(file);
}
