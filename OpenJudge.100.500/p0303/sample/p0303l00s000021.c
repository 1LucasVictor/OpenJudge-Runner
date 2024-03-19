#include <stdio.h>
#include <math.h>




int main(){

    long long n, k;
    long long w[100001];
    long long wc, wt, wp;
    long long min, max;
    long long p;
    long long i;

    scanf( "%lld %lld", &n, &k);

    for( i=0; i<n; i++ ){
        scanf( "%lld", &w[i] );
        if( min < w[i] ) min = w[i];
    }



   wc = 1; max =10000000000; wp = 0;
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
    printf( "%lld\n", wp );
    return 0;
}
