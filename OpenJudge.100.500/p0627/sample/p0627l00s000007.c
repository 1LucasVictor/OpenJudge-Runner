#include <stdio.h>

int a,b,ans ;

int main(void){
    
    scanf ("%d%d",&a,&b) ;
    
    ans = a+b ;
    
    if ( ans < a-b ) { ans = a-b ; }
    
    if ( ans < a*b ) { ans = a*b ; }
    
    printf ("%d",ans) ;
    
    return 0 ;
    
    
    
}
