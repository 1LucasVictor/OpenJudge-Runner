#include <stdio.h>

int x,a,b ;

int main(void){

    scanf ("%d%d%d",&x,&a,&b) ;
    
    if ( a>=b ){
        printf ("delicious\n") ;
        
    } else if ( a+x>=b ){
        printf ("safe\n") ;
        
    } else {
        printf ("dangerous\n") ;
        
    }
    
    return 0 ;
    
}
