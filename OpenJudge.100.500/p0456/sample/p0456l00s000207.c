#include <stdio.h>

void main(){
    char s[200000], t[200000];
    int ss,st;
    ss = scanf("%s", s);
    st = scanf("%s", t);
    if (ss== -1 || st == -1){
        puts("error");
    }
    
    int count = 0;
    int i= 0;

    while (s[i] != '\0'){
        
        if (s[i] != t[i]){
            count++;
        }
        i++;
    }
    printf("%d", count);
}