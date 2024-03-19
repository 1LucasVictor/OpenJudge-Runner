#include <stdio.h>
int main (int argc, char * argv[])
{
    int  n,m,l,A,B,C;
    long long a[101][101]={0};
    long long b[101][101]={0};
    long long c[101][101]={0};
    scanf("%d %d %d",&n,&m,&l);
    //行列aの入力
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             scanf("%d", &A);
            a[i][j] = A;
        }
    }
    //行列bの入力
    for(int j=0;j<m;j++){
        for(int k=0;k<l;k++){
             scanf("%d", &B);
            b[j][k] = B;
        }
    }
  
    //行列aと行列bの計算
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            c[i][j] = 0;
            for(int k=0;k<m;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
            
        }
    }
    //結果を出力
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            printf("%lld", c[i][j]);
            c[i][j] = C;

            if(j!=l-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

