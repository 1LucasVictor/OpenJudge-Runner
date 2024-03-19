#include<stdio.h>
int main(void){
    char s[10];
    scanf("%s", s);
    if(s[1] == 'R'){
        printf("ABC\n");
    }else{
        printf("ARC\n");
    }
    return 0;
}