#include<stdio.h>
#define minimum(a,b) ((a)>(b))?(b):(a)
int main(void){
    int i, j, n, o, p, q, r, tmp, test[100][100]={0};
    scanf(" %d ", &n);
    for( i = 0 ; i < n ; i++ ){
        scanf( " %d %d " , &o , &p );
        for( j = 0 ; j < p ; j++ ){
            scanf( " %d %d " , &tmp , &r );
            test[o][tmp] = r;
        }
    }
    for( i = 0 ; i < n ; i++ ){
        for( j = 0 ; j < n ; j++ ){
            if( (test[i][j] == 0) && (i != j) ){
                test[i][j]=100000000;
            }
        }
    }
                
    for( q = 0 ; q < n ; q++ ){
        for( i = 0 ; i < n ; i++){
            for( j = 0 ; j < n ; j ++){
                test[i][j] = minimum( test[i][j] , test[i][q] + test[q][j] );
            }
        }
    }            
    for( i = 0 ; i < n ; i++)
        printf( " %d %d\n ", i , test[0][i] );
    return 0;
}