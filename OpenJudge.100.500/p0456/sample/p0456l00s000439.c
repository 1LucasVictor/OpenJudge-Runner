#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[256],t[256];
    scanf("%s", s);
    scanf("%s", t);
    int a = 0;
    int b = 0;
    while(s[a] != '\0'){
        if(t[a] != s[a]){
            b++;
        }
        a++;
    }
    printf("%d\n", b);
    return 0;


}
