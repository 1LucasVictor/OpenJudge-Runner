#include <stdio.h>

 
int main() {
    int n, g;
    int list[101][101];
    int i, a, v, u;
 
    for(i = 0; i <= 100; i++){
        for(a = 0; a <= 100; a++){
            list[i][a] = 0;
        }
    }
 
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d%d",&u,&v);
     
        for(a = 0; a < v; a++){
            scanf("%d", &g);
            list[i][g-1] = 1;
        }
    }
 
    for(i = 0; i < n; i++){
        for(a = 0; a < n-1; a++){
            printf("%d ", list[i][a]);
        }
        printf("%d\n", list[i][n-1]);
    }
    return 0;
}