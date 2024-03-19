#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    
    int a[n][m]; //行列
    
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int b[m]; //ベクトル
    
    for(int i = 0;i < m;i++){
        scanf("%d",&b[i]);
    }
    
    int c[n];
    
    //c[n]の初期化
    for(int i = 0;i < n;i++){
        c[i] = 0;
    }
    
    //行列とベクトル積の計算
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            c[i] += a[i][j] * b[j];
        }
    }
    
    //出力
    for(int i = 0;i < n;i++){
        printf("%d\n",c[i]);
    }
    
    return 0;
}

