#include <stdio.h>

int main(void){
    int Tate[101][101],Yoko[101][101];
    long long int Box[101][101];
    int n,m,l;
    int i,j,k=0;

    scanf("%d %d %d",&n,&m,&l);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&Tate[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%d",&Yoko[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            Box[i][j]=0;
            for(k=0;k<m;k++){
                Box[i][j] += Tate[i][k]*Yoko[k][j];
            }
            printf("%lld",Box[i][j]);
            if(j!=l-1) printf(" ");
        }
        printf("\n");
    }
}
