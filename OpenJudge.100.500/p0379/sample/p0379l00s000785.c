#include<stdio.h>

void m_multiple(int a[100][100], int b[], int c[], int n, int m){
    int i, j;
    for (i = 0; i < n;i++){
        for (j = 0; j < m;j++){
            c[i] += a[i][j] * b[j];
        }
    }
}

int main(void){
    int n, m;
    int i, j;
    int a[100][100];
    int b[100];
    int c[100];
    for (i = 0; i < 100;i++){
        c[i] = 0;
    }
        scanf("%d %d", &n, &m);
    for (i = 0; i < n;i++){
        for (j = 0; j < m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m;i++){
        scanf("%d", &b[i]);
    }
    m_multiple(a, b, c, n, m);
    for (i = 0; i < n;i++){
        printf("%d\n", c[i]);
    }
    return 0;
}
