#include <stdio.h>
#include <stdlib.h>
#include "output.h"

void output(char * znach, char *filename)
{
    FILE * file = fopen(filename, "w+");//открываем или создаем файл
    fprintf(file,"%s", znach);// пишем в файл
    fclose(file);// закрываем файл
}
