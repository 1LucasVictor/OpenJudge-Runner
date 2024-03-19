#include<stdio.h>
#include<string.h>

int main(void){
    char s[33], t[33];
    int i=0, x=0;

    scanf("%s%s",s ,t);

    while(s[i] != '\0'){
        if(t[i] != s[i]){
            x++;
        }
        i++;
    }
    printf("%d\n", x);
    return 0;
}