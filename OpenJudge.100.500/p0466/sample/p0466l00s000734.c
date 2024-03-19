#include<stdio.h>
#include<string.h>  

int main(void){
    register int i;
    char s[11],t[12];
    scanf("%s%s",s,t);
    for(i = 0;i < strlen(s);i++)if(s[i] != t[i]){
        puts("No");
        return 0;
    }
    puts("Yes");
}