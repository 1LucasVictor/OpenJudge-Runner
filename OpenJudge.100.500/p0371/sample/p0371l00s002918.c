#include <stdio.h>

int main(void){
    int n;
    int a[10000];
    scanf("%d", &n);
    for( int c = 0 ; c < n ; c++ ) {
        scanf("%d", &a[c]);
    }
    int min = a[0];
    int max = a[0];
    int sum = 0;
    for( int d = 0 ; d < n ; d++ ) {
        if( min > a[d] )    min = a[d];
    }
    for( int e = 0 ; e < n ; e++ ) {
        if( max < a[e] )    max = a[e];
    }
    for( int f = 0 ; f < n ; f++ ) {
        sum = sum + a[f];
    }
    printf("%d %d %d\n", min, max, sum);
    return 0;
}
