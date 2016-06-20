#include "output.h"

void output(char *znach, char *filename)
{
    printf("%s", znach);
    FILE * file = fopen(filename, "a+");

//    fprintf(file,"%s\n", znach);
    fputs(znach, file);
    free(znach);
    fclose(file);
}
