#include<stdio.h>

int main(){
    int i,j,n,M[100][100],a,b,c;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            M[i][j] = 0;
        }
    }
    for(i = 0;i < n;i++){
        scanf("%d%d",&a,&b);
        a--;
        for(j = 0;j < b;j++){
            scanf("%d",&c);
            c--;
            M[a][c] = 1;
        }
    }
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            if(j >= 1) printf(" ");
            printf("%d",M[i][j]);
        }
        printf("\n");
    }
}
