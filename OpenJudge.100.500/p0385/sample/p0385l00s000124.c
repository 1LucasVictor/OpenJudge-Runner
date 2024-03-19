#include<stdio.h>

#define MAX 1000

int main() {
    //変数の宣言
    int x[MAX];
    int n=0, i, xhako, total; //処理用
    int amari; //処理用２
    
    
    //入力
    while (1) {
        scanf("%d", &x[n]);
        if (x[n] == 0) {
            break;
        }
        n++;
    }
    
    
    
    //１０で割って余りをtotal+=してく。
    //整数部分が１に満たなくなるまで繰り返す
    for (i=0; i<n; i++) {
        total = 0; //初期化
        xhako = x[i];
        
        while (1) {
            //余りを管理する方
            amari = xhako % 10;
            //商を管理する方
            xhako = xhako / 10;
            
            total += amari; //足してく
            
            if (xhako < 1) {
                break;
            }
        }
        printf("%d\n", total);
    }
    
    
    
    
    return 0;
}

