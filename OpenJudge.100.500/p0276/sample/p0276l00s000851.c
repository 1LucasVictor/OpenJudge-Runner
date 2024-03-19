#include<stdio.h>
#define N 100

int n,x,y,A[N][N];

int main(){
    int i,j,ayane;
    for(i = 0;i < N;i++){
        for(j = 0;j < N; j++){
            A[i][j] = 0;
        }
    }

    scanf("%d",&n);
    for(i = 0;i < n; i++){
        scanf("%d %d",&x,&y);
            for(j = 0;j < y;j++){
                scanf("%d",&ayane);
                A[i][ayane - 1] = 1;
              }
    }

    for(i = 0;i < n; i++){
        for(j = 0; j < n; j++){
           printf("%d", A[i][j]);
           if(j!=n-1){
               printf(" ");
           }
        }

        printf("\n");
    }

    return 0;
}
