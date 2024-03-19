#include <stdio.h>
 
 
int main(){
 
    int n, m, x, y;
    int A[100][100] ,b[100], c;
 
    scanf( "%d %d", &n, &m );
     
 
    for( y=0; y<n; y++){
        for( x=0; x<m; x++ ){
            scanf( "%d", &A[x][y] ); 
        }
    }
    for( x=0; x<m; x++ ) scanf( "%d", &b[x] );
 
 
 
    for( y=0; y<n; y++){
        c = 0;
        for( x=0; x<m; x++ ){
            c += A[x][y]*b[x];
        }
        printf("%d\n", c);
    }
 
 
    return 0;
 
}