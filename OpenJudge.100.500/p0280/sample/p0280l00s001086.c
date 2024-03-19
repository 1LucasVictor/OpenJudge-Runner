#include <stdio.h>
#include <stdlib.h>
 
#define MAX 100
#define NIL -1
#define INFTY (1<<21);
 
int M[MAX][MAX];
int *key, *p;
int n;
 
void input() {
    int i, j;
 
    scanf("%d", &n);
 
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &M[i][j]);
            if (M[i][j] == NIL) {
                M[i][j] = INFTY;
            }
        }
    }
}
 
void init() {
    int i;
 
    key = (int *)malloc(sizeof(int) * n);
    p = (int *)malloc(sizeof(int) * n);
 
    for (i = 0; i < n; i++) {
        key[i] = INFTY;
        p[i] = NIL;
    }
 
    key[0] = 0;
}
 
int MSTPrim() {
    int i, j, k, u, sum = 0;
 
    init();
 
    while (1) {
        u = NIL;
 
        for (i = 0; i < n; i++) {
            if (p[i] == 1) continue;
            if (u == NIL || key[i] < key[u]) {
                u = i;
            }
        }
 
        if (u == NIL) break;
        p[u] = 1;
        for (i = 0; i < n; i++) {
            if (key[i] > M[u][i] && p[i] == NIL) {
                key[i] = M[u][i];
            }
        }
    }
 
    for (i = 0; i < n; i++) {
        sum += key[i];
    }
 
    return sum;
}
 
void Free() {
    free(key);
    free(p);
}
 
main() {
 
    input();
    printf("%d\n", MSTPrim());
    Free();
 
    return 0;
}