#include<stdio.h>

int main(void){

    char str[3];
    scanf("%s",str);

    if('R' == str[1]){
        printf("ABC\n");
    }else if('B' == str[1]){
        printf("ARC\n");
    }else{
        printf("Error\n");
    }

    return 0;
}