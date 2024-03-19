#include<stdio.h>
#include<string.h>
int main(void){
    char *s;
    int i;
    scanf("%s", s);
    int len = strlen(s);
    for(i = 0; i < len / 2; i++){
        char tmp;
        tmp = s[i];
        s[i] = s[len - i -1];
        s[len - i - 1] = tmp;
    }
    printf("%s\n", s);
    
    return 0;
}