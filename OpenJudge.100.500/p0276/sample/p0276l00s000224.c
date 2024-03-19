#include <stdio.h>

int main(){
        int n, u, k, num, mat[128][128];
        int i, j;

        for(i = 1 ; i <= n ; i++){
                for(j = 1 ; j <= n ; j++){
                        mat[i][j] = 0;
                }
        }

        scanf("%d", &n);

        for(i = 1 ; i <= n ; i++){
                scanf("%d %d", &u, &k);
                for(j = 0 ; j < k ; j++){
                        scanf("%d", &num);
                        mat[u][num] = 1;
                }
        }

        for(i = 1 ; i <= n ; i++){
                for(j = 1 ; j <= n; j++){
                        printf("%d", mat[i][j]);
                        if(j < n)printf(" ");
                }
                printf("\n");
        }

        return 0;
}

