#include <stdio.h>

int main() {
    /*
    変数定義するよ。
    n:行列あAの行数
    m:行列AとベクトルBの列数
    i:ループ用変数
    j:ループ用変数
    */
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int ans = 0;

    /*
    行列のサイズを読み込むよ。
    */
    scanf("%d %d",&n,&m);

    /*
    行列を定義するよ
    */
    int matrixa[100][100]={0};
    int matrixb[100]={0};
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&matrixa[i][j]);
        }
    }
    
    for(i=0;i<m;i++){
        scanf("%d",&matrixb[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            ans += matrixa[i][j] * matrixb[j];
        }
        printf("%d\n",ans);
        ans = 0;
    }
    
    return 0;
}
