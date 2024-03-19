#include <stdio.h>

int d,n,ans ;

int main(void){

    scanf ("%d%d",&d,&n) ;
    
    if ( d==0 ){
        
        ans = n ;
    }
    else if ( d==1 ){
        
        ans = n*100 ;
    }
    else if ( d==2 ){
        
        ans = n*10000 ;
    }
    
    printf ("%d\n",ans) ;
    
    return 0 ;
    
}
