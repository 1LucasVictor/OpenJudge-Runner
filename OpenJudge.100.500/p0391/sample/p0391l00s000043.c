#include <stdio.h>
#include <string.h>

int main(void){
    char str[1001] , ch[1001] ;
    int q , a , b ;
    int i , j ;
    char order[8] ;
    scanf("%s" , str) ; 
    scanf("%d" , &q) ;
    
    for(i = 0 ; i < q ; i++){
        scanf("%s %d %d" , order , &a , &b) ;
        
        if(strcmp(order , "replace") == 0){
            scanf("%s" , ch) ;
            for(j = a ; j <= b ; j++){
                str[j] = ch[j - a] ;
            }
        }
        
        if(strcmp(order , "reverse") == 0){
            for(j = a ; j <= b ; j++){
                ch[b - j] = str[j] ;
            }
            for(j = a ; j <= b ; j++){
                str[j] = ch[j - a] ;
            }
        }
        
        if(strcmp(order , "print") == 0){
            for(j = a ; j <= b ; j++){
                printf("%c" , str[j]) ;
            }
            printf("\n") ;
        }
    }
    return 0 ;
}
