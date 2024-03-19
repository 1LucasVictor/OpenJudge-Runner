#include <stdio.h>

int main(){
    char s[4] = {0};
    int i = 0;
    
    scanf("%s",s);
    
    for(i = 0 ; i < 4 ;i++){
        if(i > 0 && s[i] == s[i-1]){
            printf("Bad\n");
            return 0;
        }
        /* 
        if(s[i] == s[i-1] && i > 0)
            break;
            */
    }
    
      printf("Good\n");
    
    
    return 0;

}