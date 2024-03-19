#include <stdio.h>
#include <string.h>

int main(){
    char s[200000];
    char t[200000];
    scanf("%s\n", s);
    scanf("%s\n", t);
    
    for(int i=0; i<strlen(s); i++){
        if(97>s[i] && s[i]>122){
            return 0;
        }
        if(97>t[i] && t[i]>122){
            return 0;
        }
    }

    if(strlen(s) != strlen(t)){
        return 0;
    }

    int change;
    for(int n=0; n<=strlen(s); n++){
        if(s[n] != t[n]){
            change += 1;
        }
    }

    printf("%d\n", change);
    return 0;

}