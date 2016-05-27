#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "searh.h"

char *searh(char * str1, char *result)
{
    int i = 0;//счетчик
    char strname[256];//имя пользователя
    if (str1[i] == '~')//если строка начта с символв ~
    {
        i ++;// + один символ
        if (str1[i] == '/')//если дальше /
        {
            return "Path relative to current user home directory.";//путь указан до директории текущего пользователя
        }
        else//иначе
        {
            int k = 0;//счетчик букв имени пользователя

            while (str1[i] != '/')//пока не встретим символ /
            {
                strname[k] = str1[i];//переписываем буквы в переменную с именем пользователя
                ++i; ++k;//
            }
            sprintf(result,"path relative to user %s  home directory.", strname);//ура руть относительный до директории пользователя
                                                                        //имя каторого запоинили в strname
            return result;//возвращаем результат
        }
    }
    if (str1[i] == '/')//если строка начата с /
    {
        return "Not relative path.";//блин, путь не относительный, валим отсюда.
    }
    return 0;
}
