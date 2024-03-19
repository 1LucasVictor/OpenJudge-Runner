#include <stdio.h>
#include <string.h>

int main(void){
    char s[4];
    char ABC[]="ABC";

    scanf("%s",s);
    if(s[1]==ABC[1]){
        printf("ARC");
    }else{
        printf("ABC");
    }

    return 0;
}