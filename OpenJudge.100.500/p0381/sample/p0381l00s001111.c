#include<stdio.h>

int main(void){
    int i,j,k,n,x;
    int count;
    while ( 1 ) {
        count = 0;
        scanf("%d %d", &n, &x);
        if ( n == 0 && x == 0 ) break;
        for ( i = 1 ; i < n - 1 ; i++ ) {
            for ( j = i + 1 ; j < n ; j++ ) {
                if ( j == i ) continue;
                for ( k = j + 1 ; k < n + 1; k++ ) {
                    if ( k == i || k == j ) continue;
                    if ( i + j + k == x ) {
                        count++;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
