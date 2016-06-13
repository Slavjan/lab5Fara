#include <stdio.h>
#include <string.h>
#include "include/input.h"
#include "include/output.h"


void input(char *filename, char *stroka)
{
        FILE *file = fopen(filename, "r");
        printf("File ^| %s | \n", filename );

        char znach[255][255];

        if (file == NULL)
        {
            printf("File | %s | not found \n",filename);
            return input(filename, stroka);
        }
        else
        {
            int i = 0;
            while(!feof(file))
            {
                fgets(stroka, 1000, file);
                output(search(stroka), "output.txt");
                i++;
            }
            /*
             * login : password : UID : GID : GECOS : home : shell
            */

            fclose(file);

            return znach;
        }
    return 0;
}
