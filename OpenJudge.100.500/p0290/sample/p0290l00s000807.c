#include<stdio.h>
 
int main( void ) 
{
 
    int n;
    scanf( "%d", &n );
    
    int i, j;
    int num[10000]; 
    int cnt = n;
    for( i=0; i<n; i++ ) {
        scanf( "%d", &num[i] );
    }
    for( i=0; i<n; i++ ) {    
        if( 2 == num[i] ) { continue; }
        
        if( 0 != num[i]%2 ) {
            for( j=3; j*j<=num[i]; j+=2 ) {
                if( 0 == num[i]%j ) {
                    cnt--;
                    break;
                }
            }
        } else {
            cnt--;
        }
        
    }
     
    printf( "%d\n", cnt );
    
    return 0;
}