#include<stdio.h>

int main(){
    int n, m, i, j, k;
    scanf("%d %d", &n, &m);
    int b[m], a[n][m], c[n];
    for(i=0 ;i<n ; i++){
        for(j=0 ;j<m ;j++){
            scanf("%d ", &a[i][j]);
        }
    }
    for(k=0 ; k<m ;k++){
        scanf("%d", &b[k]);
    }
    
    for(i=0 ;i<n ;i++){
        c[i] = 0;
        for(k=0 ;k<m ;k++){
            c[i] += a[i][k] * b[k];
        }
         printf("%d\n", c[i]);
    }
    return 0;
}