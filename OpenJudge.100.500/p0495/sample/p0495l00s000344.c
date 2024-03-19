#include <stdio.h>

int main (void){
    char *s;
    scanf("%s",s);
    int i = -1;
    int flg = 1;
    while(++i < 3){
        if(s[i] != s[0])
            flg != 0;
    }
    if(flg)
        printf("Yes\n");
    else 
        printf("no\n");
}