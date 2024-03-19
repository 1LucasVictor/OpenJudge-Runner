#include <stdio.h>

void main(int argc, char *argv[])
{
    char str[3] = "\0";
    scanf("%s",str);

    if(str[0]==str[1])
    {
        if(str[1]==str[2]){
            if(str[2]==str[0]){
                printf("No");
                return;
            }
        }
    }
    printf("Yes\n");
    return;
}