#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char a[4];
    scanf("%s",a);
    if(strcmp(a,"ABC")==0){
        printf("ARC");
    }else{
        printf("ABC");
    }

    return 0;
}