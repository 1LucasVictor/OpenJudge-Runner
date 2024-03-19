#include<stdio.h>
#include<string.h>

int main(void){
    char str[4];
    scanf("%s",str);
    if(strcmp(str,"ABC"))puts("ABC");
    else puts("ARC");
}