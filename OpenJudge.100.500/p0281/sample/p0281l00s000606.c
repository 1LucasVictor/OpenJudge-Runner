#include <stdio.h>
#define black 1
#define white 0
#define BIG 2000000000

int n,c[100][100], A[100], color[100];

void Keiro() {
    int i, min, u, v;
    
    for (i = 0; i < n; ++i) {
        color[i]  = white;
        A[i] = BIG;
    }
    
    A[0] = 0;
    
    while(1) {
        min = BIG;
        
        u = -1;
        for(i = 0; i < n; i++) {
            if (min > A[i] && color[i] != black) {
                u = i;
                min = A[i];
            }
        }
        if (u == -1) break;
        
        color[u] = black;
        for (v = 0; v < n; ++v) {
            if (color[v] != black && c[u][v] != BIG) {
                if (A[v] > A[u] + c[u][v]) {
                    A[v] = A[u] + c[u][v];
                }
            }
        }
        
    }
    
}
int main() {
    int i, j, k, a, b;
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i){
        for (j = 0; j < n; ++j) {
            c[i][j] = BIG;

        }
    }
    for (i = 0; i < n; ++i) {
        scanf("%d %d", &a, &k);
        for (j = 0; j < k; ++j) {
            scanf("%d %d", &a, &b);
            c[i][a] = b;
        }
    }
    Keiro();
    
    for (i = 0; i < n; ++i) {
        printf("%d %d\n", i, A[i]);
    }

    return 0;
}