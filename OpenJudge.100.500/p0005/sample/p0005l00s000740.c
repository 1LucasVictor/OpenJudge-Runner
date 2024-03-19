#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[20];
    int i, j, ch;
    for(i = 0;i < 20;i++){
        scanf("%c",&str[i]);
        if( str[i] == '\n')break;
    }
    for(j = 0;j < i/2;j++){
        ch = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = ch;
    }
    for(j = 0;j < i;j++){
        printf("%c",str[j]);
    }
    printf("\n");
    return 0;
}