#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/searh.h"

char *searh(char * str1, char *result)
{
    int i = 0;
    char strname[256];
    if (str1[i] == '~')
    {
        i ++;
        if (str1[i] == '/')
        {
            return "Path relative to current user home directory.";
        }
        else
        {
            int k = 0;

            while (str1[i] != '/')
            {
                strname[k] = str1[i];
                ++i; ++k;
            }
            sprintf(result,"path relative to user %s  home directory.", strname);

            return result;
        }
    }
    if (str1[i] == '/')
    {
        return "Not relative path.";
    }
    return 0;
}
