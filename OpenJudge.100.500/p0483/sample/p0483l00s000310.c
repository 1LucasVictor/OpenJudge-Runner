#include <stdio.h>
#include <string.h>

int main(void){
    char text[]="000";
    scanf("%s",text);
    if(strncmp("7",&text[0],1)==0){
        printf("Yes");
    }else if(strncmp("7",&text[1],1)==0){
        printf("Yes");
    }else if(strncmp("7",&text[2],1)==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}