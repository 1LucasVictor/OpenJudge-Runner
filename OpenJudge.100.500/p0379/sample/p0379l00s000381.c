#include <stdio.h>
int main(void){
    
    int n,m,i,j;
    scanf( "%d %d" , &n , &m );
    int a[n][m];
    int b[m];
    int c = 0;

    for( i = 0; i < n ; i++ ){
        for( j = 0 ; j < m ; j++ ){
            scanf("%d" , &a[i][j] );
        }
    }

    for( i = 0; i < m ; i++ ){
            scanf("%d" , &b[i] );
    }


    for( i = 0; i < n ; i++ ){
        for( j = 0 ; j < m ; j++ ){
            c += a[i][j] * b[j];
        }
        printf( "%d\n" , c );
        c = 0;
    }
}

