#include<stdio.h>


int main() {
    //変数の宣言
    int hako;
    int n, i, min = 1000001, max = -1000001, total=0;
    
    //入力
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &hako);
        
        if (min > hako) {
            min = hako;
        }
        
        if (max < hako) {
            max = hako;
        }
        
        total += hako;
    }
    
    
    
    //出力
    printf("%d %d %d\n", min, max, total);
    
    return 0;
}

