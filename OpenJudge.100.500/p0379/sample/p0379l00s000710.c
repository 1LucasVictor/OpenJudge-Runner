#include <stdio.h>
int main(void){
    int n, m;
    int i, j;
    int A[100][100];
    int b[100];
    int c[100] = {0};
    scanf("%d %d",&n, &m);
    for(i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            c[i] += (A[i][j] * b[j]);
        }
    }
    for(i = 0; i < n; i++){
        printf("%d\n", c[i]);
    }
    return 0;
}
