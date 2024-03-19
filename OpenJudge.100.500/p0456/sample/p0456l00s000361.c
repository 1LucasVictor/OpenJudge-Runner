#include <stdio.h>

int main(){
    char s[200000];
    char t[200000];
    int ss,st;
    ss = scanf("%s", s);
    st = scanf("%s", t);
    if (ss== -1 || st == -1){
        puts("0");
    }
    else{
    
        int count = 0;
        int i= 0;

        while (s[i] != '\0' && i <200000){
            
            if (s[i] != t[i]){
                count++;
            }
            i++;
        }
        printf("%d", count);
    }
    return 0;
}