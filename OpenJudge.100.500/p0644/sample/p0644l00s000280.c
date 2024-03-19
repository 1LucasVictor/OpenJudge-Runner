#include <stdio.h>

int ans ;
char s[4] ;

int main(void){
    
    scanf ("%s",s) ;
    
    if (s[0]=='1'){
        ans++ ;
    }
    if (s[1]=='1'){
        ans++ ;
    }
    if (s[2]=='1'){
        ans++ ;
    }
    
    printf ("%d",ans) ;
    
    return 0 ;
    
}