#include <stdio.h>
#define N 102
int G[N][N];
int main(){
    int n,i,j,u,n2,v;
    scanf("%d",&n);
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            G[i][j] = 0;
        }
    }
    
    for(i = 0; i < n; i++){
        scanf("%d %d",&u,&n2);
        for(j = 0; j < n2; j++){
            scanf("%d",&v);
            G[u-1][v-1] = 1;
        }
    }
    for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
        printf("%d",G[i][j]);
          if(n != j){
            printf(" ");
          }
        }
        printf("\n");
    }
    return 0;
}