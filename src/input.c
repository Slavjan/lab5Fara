#include <stdio.h>
#include "include/input.h"


void input(char *filename, char *stroka)
{
        FILE *file = fopen(filename, "r");
        printf("File ^| %s | \n",file);

        if (file == NULL)
        {
            printf("File | %s | not found \n",file);
            return;
        }
        else
        {
                fgets(stroka, 1000, file);
                fclose(file);
                printf("stroka %s \n", stroka);
        }

}
