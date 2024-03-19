#include <stdio.h>

int main(void){
    char s[3];
    scanf("%s",&s);
    if(strcmp(s,"ABC") == 0){
        printf("ARC");
    }else{
        printf("ABC");
    }
    return 0;
}