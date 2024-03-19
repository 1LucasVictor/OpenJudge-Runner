#include <stdio.h>
#include <string.h>

int main(){

    char num[3];
    char *pch;

    scanf("%s",&num);
    pch = strstr (num,"7");
    if (pch != NULL)
        puts("Yes");
    else 
        puts("No");

    return 0;
}
//todo
// !
// ?
// * 