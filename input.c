#include "input.h"


void input(char *filename, char *stroka)
{
        FILE *file = fopen(filename, "r");
        printf("File | %s | \n", filename );

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
                char *s = search(stroka);
                output(s, "output.txt");
                i++;
            }
            /*
             * login : password : UID : GID : GECOS : home : shell
            */

            fclose(file);
        }
}
