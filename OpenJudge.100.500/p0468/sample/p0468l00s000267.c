#include<stdio.h>

int main(void){
    char S[3];
    scanf("%s", S);
    if('B' == S[1]){
        printf("ARC\n");
    }
    else{
        printf("ABC\n");
    }
    return 0;
} 