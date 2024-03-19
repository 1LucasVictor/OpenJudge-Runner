
#include <stdio.h>

int main(){

    long n, k;
    long w[100001];
    long wc, wt;
    long min, max;
    long p;
    long i;

    scanf( "%ld%ld", &n, &k);

    for( i=0L; i<n; i++ ){
        scanf( "%ld", &w[i] );
        if( min < w[i] ) min = w[i];
        max += w[i];
    }



    min = 0L;  
    while( min < max ){

        p = min + ( max - min )/2L;
        //printf( " [%ld]%ld:%ld\n", p, min, max );

        // in: p, out; wc
        wt = 0L; wc = 0L; 
        for( i=0; i<n; i++ ){
            if( p < w[i] ){  wt=0L; wc=k+1; break;} 
            wt += w[i];
            
            if( wt > p ){ 
                //printf( "  %ld:%ld@%ld\n", wc, wt, w[i] );
                wt = w[i];
                wc++;
            }else if( wt == p){
                //printf( "  %ld:%ld@%ld\n", wc, wt, w[i] );
                wt = 0L;
                wc++;
            }
        }
        if( wt > 0 ) wc++;
        
        if( k < wc ) min = p + 1L;
        if( k >= wc ) max = p;
    }
    

    printf( "%ld\n", min );
    return 0;
}

