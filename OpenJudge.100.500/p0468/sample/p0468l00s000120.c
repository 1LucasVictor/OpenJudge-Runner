
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);



    if (str[1]=='B')
    {
        printf("ARC\n");
    }
    else
    {
        printf("ABC\n");
    }


    return 0;
}