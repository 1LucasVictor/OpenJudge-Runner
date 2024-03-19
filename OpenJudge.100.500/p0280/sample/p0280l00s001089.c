#include <stdio.h>
#define BIG 2000000000
#define white 0
#define black 1
 
int n,c[100][100];
 
int prim() {
    int i, d[100], p[100], color[100], sum, minconst, u;
    for (i = 0; i < n; ++i) {
        color[i] = white;
        d[i] = BIG;
    }
     
    d[0] = 0;
     
    while(1){
        minconst = BIG;
        for (i = 0; i < n; ++i){
            if (color[i] != black && d[i] < minconst){
                minconst = d[i];
                u = i;
            }
        }
         
        if (minconst == BIG) break;
         
        color[u] = black;
         
        for (i = 0; i < n; ++i) {
            if (color[i] != black && c[u][i] != BIG) {
                if (c[u][i] < d[i]){
                    d[i] = c[u][i];
                    p[i] = u;
                }
            }
        }
    }
     
    sum = 0;
    for (i = 1; i < n ; ++i) {
        sum += c[i][p[i]];
    }
    return sum;
}
 
int main() {
    int i, j;
    scanf("%d", &n);
     
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &c[i][j]);
            if (c[i][j] == -1) c[i][j] = BIG;
        }
    }
     
    printf("%d\n", prim());
    return 0;
}