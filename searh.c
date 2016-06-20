#include "searh.h"

char *search(char *str1)
{
    int i = 0;
    char strname[256];
    char *result = malloc(sizeof(char)*255);
    searcHome(str1, str1);
    char *path = str1;
    if (str1[i] == '~')
    {
        i++;
        if (str1[i] == '/')
        {
            sprintf(result, "%s\n ^Path relative to current user home directory.\n", path);
            return result;
        }
        else
        {
            int k = 0;

            while (str1[i] != '/')
            {
                strname[k] = str1[i];
                ++i; ++k;
            }
            strname[k] = '\0';
            sprintf(result,"%s\n ^Path relative to user \"%s\" home directory.\n", path, strname);

            return result;
        }
    }
    if (str1[i] == '/')
    {
        sprintf(result,"%s\n ^Path ot relative path.\n", path);
        return result;
    }
    return NULL;
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
