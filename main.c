#include <stdio.h>
#include <stdlib.h>
#include "include/input.h"
#include "io.h"
#include "include/output.h"
#include "include/searh.h"
int main()
{
    //char * waypaswd = "/etc/passwd";
    char file_name[256];
    char file_out_name[256];
   // char str[1500];
    char strdata[256];
    char result[256];
    char* znach;
    printf("NameFILE: ");
    scanf("%s",file_name);
    input(file_name, strdata);
   // readFile(str, "1500");
    znach = searh(strdata, result);
    //printf("string : %s \n", strdata);
    //printf("result : %s \n", znach);
   // ptintf("ddd %s", result);
   //printf("aaaa %s: \n", result);
    printf("NameOutFILE: ");
    scanf("%s",file_out_name);
    output(znach, file_out_name);
    return 0;
}
