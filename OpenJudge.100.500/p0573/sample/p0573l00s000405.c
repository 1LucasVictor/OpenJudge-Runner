#include <stdio.h>

int main(void){
    char s[5];
    int memo[26] = {};
    int i,j=0;
    scanf("%s", s);
    
    for(i = 0; i < 4; i++){
        memo[s[i] - 'A']++;
    }
    
    for(i = 0; i < 26; i++){
        //printf("%d:%d\n", i, memo[i]);
        if(memo[i] == 2){
            j++;
        }
    }
    
    if(j == 2){
        puts("Yes");
    }else{
        puts("No");
    }
    
    return 0;
}