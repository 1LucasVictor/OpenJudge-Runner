#include <stdio.h>

int main(){
    int a[101][101];
    int b[101][101];
    int c[101][101];
    int m,n,l;

    scanf( "%d %d %d", &m, &n, &l );
    for( int i = 0; i < m; i++ ){
        for( int j = 0; j < n; j++ ){
            scanf( " %d", &a[i][j] );
        }
    }

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < l; j++ ){
            scanf( " %d", &b[i][j] );
        }
    }

    for( int i = 0; i < m; i++ ){
        for( int j = 0; j < l; j++ ){
            for( int k = 0; k < m; k++ ){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for( int i = 0; i < m; i++ ){
        for( int j = 0; j < l; j++ ){
            if( j != l -1 ){
                printf( "%d ",c[i][j] );
            } else {
                printf( "%d\n",c[i][j] );
            }
        }
    }
    return 0;
}
