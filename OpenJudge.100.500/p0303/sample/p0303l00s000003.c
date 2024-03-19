#include <stdio.h>




int main(){

    long n, k;
    long w[100001];
    long wc, wt, wp;
    long min, max;
    long p;
    long i;

    scanf( "%ld%ld", &n, &k);

    for( i=0L; i<n; i++ ){
        scanf( "%ld", &w[i] );
        if( min < w[i] ) min = w[i];
    }



   wc = 1L; max =10000L; wp = 0L;
    while( wc < k ){
        p = min + ( max - min )/2L;

        wt = 0L; wc = 1L; wp=0L;
        for( i=0L; i<n; i++ ){
            if( (wt+w[i]) >= p ){ 
                if( wp < wt ) wp = wt;
                wt = w[i];
                wc++;
            }else{
                wt += w[i];
            }
        }
        if( wc < k ) max = p;
        if( wc > k ) min = p;
    }
    
    if( wp < wt ) wp = wt;

    printf( "%ld\n", wp );
    return 0;
}
