#include <stdio.h>
#include <string.h>


int main(void){
    char s[32], t[32];
    int count = 0;
    scanf("%s", s);
    scanf("%s", t);
    for (int i=0; i<strlen(s);i++){
        if (s[i] != t[i]){
            count ++;
        }
    }
    printf("%d\n", count);
}