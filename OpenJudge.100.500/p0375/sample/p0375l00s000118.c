#include<stdio.h>

#define MAX 10000

int main() {
    //3の倍数　または　３が含まれる数を出力する
    int x; //入力されるやつ
    int i, j, count=0; //処理用
    int hako[MAX]; //出力用
    
    //入力
    scanf("%d", &x);
    
    //処理とか
    for (i=1; i<=x; i++) {
        j = i; //避難
        if (j % 3 == 0) {
            count ++; //カウンターを回す
            hako[count] = j;
        }else{
            while (1) {
                if (j % 10 == 3) {
                    count ++;
                    hako[count] = j;
                    break;
                }else{
                    j /= 10;
                }
                if (j < 3) {
                    break;
                }
            }
        }
    }
    
    //出力
    for (i=1; i<=count; i++) {
        printf(" %d", hako[i]);
    }
    printf("\n");
    
    return 0;
}

