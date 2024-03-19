#include <stdio.h>




int main(){

    int n, k;
    int w[100001];
    int wc, wt, wp;
    int min, max;
    int p;
    int i;

    scanf( "%d%d", &n, &k);

    for( i=0; i<n; i++ ){
        scanf( "%d", &w[i] );
        if( min < w[i] ) min = w[i];
    }



   wc = 1; max =10000; wp = 0;
    while( wc != k ){
        p = min + ( max - min )/2;

        wt = 0; wc = 1; wp=0;
        for( i=0; i<n; i++ ){
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
    printf( "%d\n", wp );
    return 0;
}
