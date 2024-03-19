/* ex3_4
        fmuacshai */

#include<stdio.h>

int main(void){
    //整数n、割る数m、商l
    int n,m,l;
    //nの入力
    scanf("%d",&n);
    //mの初期設定
    m=9;
    //余りが出ないまで計算
    while(n%m>0){
        m=m-1;
    }
    //商の計算
    l=n/m;
    //商が10未満ならYes、10以上ならNoと出力
    if(l<10){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}