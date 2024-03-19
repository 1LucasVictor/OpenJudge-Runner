#include <stdio.h>

int main(){
    int n;
    int a[10000];
    int max,min,sum;
    int i;
    sum = 0;
    scanf( "%d",&n );
    for ( i = 0; i < n; i++ ){
        scanf( "%d", &a[i] );
    }
    min = max = a[1];

    for ( i = 0; i < n; i++ ){
        if( a[i] > max ){
            max = a[i];
        }
        if( a[i] < min ){
            min = a[i];
        }
        sum += a[i];
    }

    printf( "%d %d %d\n",min, max,sum );
    return 0;
}