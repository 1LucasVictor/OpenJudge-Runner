/*B.c*/
#include<stdio.h>
#include <string.h>

int main(void){
    char s[200001];
    char t[200001];

    scanf("%s", s);
    scanf("%s", t);

    int r = 0;
    for (int n = 0; n < strlen(s); n++){
        if(s[n] != t[n]) {
            r++;
        }
    }

    printf("%d", r);
    return 0;
}