#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "io.h"
#include "output.h"
#include "searh.h"
int main()
{
    //char * waypaswd = "/etc/passwd";
    char file_name[256];//имя входного файла
    char file_out_name[256];//имя файла для вывода

    char strdata[256];//строка из файл
    char result[256];//результат поиска значений >>>если путь относительный<<<
    char* znach;//резултат если путь полный

    printf("NameFILE: ");//запрос имени входного файла
    scanf("%s",file_name);//считывание ^
    input(file_name, strdata);//считывание файла
    znach = searh(strdata, result);//анализ пути по условию

    printf("NameOutFILE: ");//запрос имени файла для вывода
    scanf("%s",file_out_name);//считывание ^
    output(znach, file_out_name);//вывод результатов в файл
    return 0;//всёё, конец, хватит))Ы
}
