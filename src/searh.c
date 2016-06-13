#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/searh.h"

char *search(char *str1)
{
    int i = 0;
    char strname[256],
         result[256];
    searcHome(str1, str1);

    if (str1[i] == '~')
    {
        i++;
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

int searcHome(char *str, char *home)
{
    int length = strlen(str);

    int separatorCount = 0,
        i = 0,
        j = 0;

    for(i=0; i<length && separatorCount<5; ++i)
    {
        if(str[i]==':')
            ++separatorCount;
    }
    for(j=i; j<length && separatorCount<6; ++j)
    {
        if(str[j]==':')
            ++separatorCount;
    }

    if(separatorCount!=6)
        return 1;

    j-=2;

    while(str[i]==' ')
        ++i;

    strncpy(home,str+i,(j-i+1));

    home[j-i+1]=0;

    return 0;
}
