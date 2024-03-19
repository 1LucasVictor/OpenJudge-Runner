#include <stdio.h>
 
int main () {
 
    int x[200000], a, i, max, min, mark1, ans ;
    min = 10000000 ;
    max = 0 ;
    scanf ("%d", &a) ;
     
    for ( i = 0 ; i < a ; i++) {
        scanf ("%d", &x[i]) ;
    }
     
    for ( i = 0 ; i < a ; i++ ) {
        if ( min > x[i] ) {
            min = x[i] ;
            mark1 = i ;
        }
    }
     
    if ( mark1 != a - 1) {
         
        for ( i = mark1 ; i < a ; i++ ) {
            if ( max < x[i]) {
                max = x[i] ;
            }
        }
    }
    else if ( mark1 == a - 1 ) {
        max = 10000000000 ;
        for ( i = 0 ; i < mark1 ; i++ ) {
            if ( max > x[i] ) {
                max = x[i] ;
            }
        }
        max = -max ;
        min = -min ;
    }
     
    ans = max - min ; 
    printf ("%d\n", ans) ;
    return 0 ;
}