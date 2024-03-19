#include <stdio.h>

int a,b,x ;

int main(void){
    
    scanf ("%d%d%d",&a,&b,&x) ;
    
    if ( a<=x && a+b>=x ){
        printf ("YES\n") ;
    } else {
        printf ("NO\n") ;
    }

    return 0 ;
}