#include<stdio.h>
#include<string.h>
int main(void){
    char *s;
    int i;
    scanf("%s", s);
    int len = strlen(s);
    for(i = len - 1; i >= 0; i--)
        printf("%c", s[i]);
    
    return 0;
}