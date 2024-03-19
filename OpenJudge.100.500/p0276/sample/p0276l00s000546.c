#include<stdio.h>

#define N 100
int a[N][N], b[N][N];

int main(){
    int n, i, j, k;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &a[i][0], &a[i][1]);
        if(a[i][1] != 0){ 
            for(j = 0; j < a[i][1]; j++){
                scanf("%d", &a[i][2+j]);
            }
        }
    }
    
    for(i = 0; i < n; i++){
        for(j = 0; j < a[i][1]; j++){
            b[i][a[i][j+2]-1] = 1;
        }
      }
    
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if (j != 0){
                printf(" ");
            }
            printf("%d", b[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
