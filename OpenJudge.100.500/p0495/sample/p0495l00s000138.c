#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    char str[4];
    scanf("%s",str);
    if(str[0] == str[1] && str[1] == str[2] && str[0] == str[2]){
        puts("No");
        return 0;
    }
    puts("Yes");
    return 0;
}