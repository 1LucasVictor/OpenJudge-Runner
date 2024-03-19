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



    wc = 1L; min=1L; max =100L; wp = 0L;
    while( min <= max ){

        p = min + ( max - min )/2L;
        //printf( " [%ld]\n", p );

        // in: p, out; wc
        wt = 0L; wc = 1L; wp=0L;
        for( i=0L; i<n; i++ ){
            if( (wt+w[i]) >= p ){ 
                if( wp < wt ) wp = wt;
                wt = w[i];
                wc++;
                //printf( "  :%ld>%ld:%ld:%ld\n", max, min, wc, wp );
            }else{
                wt += w[i];
            }
        }

        if( k == wc ) break;
        if( k > wc ) max = p - 1L;
        if( k < wc ) min = p + 1L;
    }
    
    if( wp < wt ) wp = wt;

    printf( "%ld\n", wp );
    return 0;
}
