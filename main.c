#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "io.h"
int main()
{
    char file_name[256];
    char strdata[256][256];
    printf("NameFILE: ");
    scanf("%s",file_name);

    input(file_name, strdata);


    return 0;
}
