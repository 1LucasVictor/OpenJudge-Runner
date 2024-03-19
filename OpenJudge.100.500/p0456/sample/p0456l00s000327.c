#include <stdio.h>
#include <string.h>


int main(void){
    char s[200000];
    char t[200000];
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