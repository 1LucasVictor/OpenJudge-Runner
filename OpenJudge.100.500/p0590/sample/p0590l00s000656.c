#include <stdio.h>

int main(void){
    int a,b,c,d,e;//アンテナA~Eの座標
    int k;//2つのアンテナ間の距離がk以下なら直接通信可能
    
    //標準入力から与えられるデータの読み込み
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &k);
    
    //アンテナA,Eの距離はe-a　これがkを超える場合はアウト
    if(e-a > k){
        //直接通信は不可能
        puts(":(");
    }else{
        //直接通信可能
        puts("Yay!");
    }
    
    return 0;
}