#include <stdio.h>

int main(void){
    char str[1201] ;
    scanf("%[^\n]" , str) ;
    int p = 0 ;
    
    while(str[p] != '\0'){
        p++;
    }
    
    for(int i = 0 ; i < p ; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    printf("%s" , str);
    printf("\n");
    
    return 0;
}
