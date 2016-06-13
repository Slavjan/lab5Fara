#include <stdio.h>
#include <stdlib.h>
#include "io.h"

void readFile(char *data, char *bufsize)//читаем файл passwd
{
    FILE * fpass = fopen("/etc/passwd", "r");
    if (fpass == NULL)
    {
        return;
    }
    int i = 0;
    while ( ( ( data[i] = getc(fpass)) != EOF) && (i < bufsize)  ) {i++;}
    fclose(fpass);

    //ctor
}
