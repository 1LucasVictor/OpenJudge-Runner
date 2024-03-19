#include<stdio.h>
int main(){
    int n, m, i, r, x[101] = {}, y[101][101] = {}, c[101] = {};
    scanf("%d %d", &n, &m);
    for( i = 0; i < n; i++ ){
        for( r = 0; r < m; r++ ){
            scanf("%d", &y[i][r]);
        }
    }
    for( i = 0; i < m; i++ ){
        scanf("%d", &x[i]);
    }
    for( i = 0; i < n; i++ ){
        for( r = 0; r < m; r++ ){
            c[i] += x[r] * y[i][r];
        }
        printf("%d\n", c[i]);
    }
    return 0;
}