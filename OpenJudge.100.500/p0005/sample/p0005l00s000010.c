#include <stdio.h>
#include <string.h>

int main(void){
        char str[21];
        int i;
        scanf("%s",&str[0]);
        for(i=0;i<strlen(str);i++){
                printf("%c",str[strlen(str)-i-1]);
        }
        printf("\n");

}