#include<stdio.h>
#include<string.h>
int main(void){
    char s[21];
    int i;
    scanf("%s", s);
    int len = strlen(s);
    for(i = len - 1; i >= 0; i--)
        putchar(s[i]);
    putchar('\n');
    
    return 0;
}