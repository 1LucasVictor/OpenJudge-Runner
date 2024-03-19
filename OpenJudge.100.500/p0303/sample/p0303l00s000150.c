#include <stdio.h>
#include <math.h>




int main(){

    long n, k;
    long w[100001];
    long wc, wt, wp;
    long min, max;
    long p;
    long i;

    scanf( "%ld %ld", &n, &k);

    for( i=0; i<n; i++ ){
        scanf( "%ld", &w[i] );
        if( min < w[i] ) min = w[i];
    }



   wc = 1; max =100; wp = 0;
    while( (wc!=k) && (max!=min) ){
        p = min + ( max - min )/2;
        //printf( " %ld:%ld>%ld::%ld.%ld\n", p, min, max, wc, k);

        wt = 0; wc = 1; wp=0;
        for( i=0; i<n; i++ ){
            if( (wt+w[i]) >= p ){ 
                if( wp < wt ) wp = wt;
                //printf( " ::%ld:%ld:%ld\n", w[i], wt, wp);
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
