#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char buf[200000];
    char buf2[200000];
    int count = 0;

    fgets(buf, sizeof(strlen(buf)), stdin);
    fgets(buf2, sizeof(strlen(buf2)), stdin);

    if (sizeof(buf) != sizeof(buf2)){
        exit(1);
    }

    for (int i = 0; i < sizeof(strlen(buf)); i++){
        if(isalpha(buf[i]) && isalpha(buf2[i])){
            if (buf[i] != buf2[i]){
            buf[i] = buf2[i];
            count++;
            }
        } 
    }

    printf("%d\n", count);
    return 0;
}
