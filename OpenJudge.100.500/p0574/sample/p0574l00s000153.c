#include <stdio.h>

int main(void){
    char s[5];
    int i,flag = 1;
    scanf("%s", s);
    
    for(i = 0; i < 4; i++){
        if(s[i] == s[i+1]){
            flag = 0;
        }
    }
    
    if(flag){
        puts("Good");
    }else{
        puts("Bad");
    }
    
    return 0;
}