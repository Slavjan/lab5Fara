#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include "include/input.h"
//#include "io.h"
=======
#include "input.h"
>>>>>>> fda90d92742945634a5bd2063ebdd944a7c97aaf
int main()
{
    char file_name[256];
    char strdata[256];
    printf("NameFILE: ");
    scanf("%s",file_name);

    input(file_name, strdata);


    return 0;
}
