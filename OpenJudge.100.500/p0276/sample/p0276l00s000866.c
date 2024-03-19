#include <stdio.h>
#define N 101

int main(){
        int n, i, j, u, k, v[N][N], num=1;

        scanf("%d", &n);
        for(i=1; i<=n; i++) {
                scanf("%d%d", &u, &k);

                for(j=1; j<=k; j++) {
                        scanf("%d", &v[i][j]);
                }
        }
        for(i=1; i<=n; i++) {
                num = 1;
                for(j=1; j<=n; j++) {
                        if(j==v[i][num]) {
                                printf("1");
                                num++;
                        }
                        else{
                                printf("0");
                        }
                        if(j+1>n) break;
                        printf(" ");
                }
                printf("\n");
        }
        return 0;
}