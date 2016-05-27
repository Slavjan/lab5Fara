#include <stdio.h>
#include "input.h"


void input(char *filename, char *stroka)//реализация 
{
        FILE *file = fopen(filename, "r");//открытие файл для чтения
        printf("File ^| %s | \n", filename);// вывод содержимого

        if (file == NULL)// если файл пустой
        {
            printf("File | %s | not found \n", filename); //значет он не найден
            return;// покидаем функцию
        }
        else//если не пустой
        {       //////переменная////файл
                fgets(stroka, 1000, file); //читаем строку из файла до 1000 символов из файла в переменную
                fclose(file);//закрываем файл
                printf("stroka %s \n", stroka);//выводим строку
        }

}
