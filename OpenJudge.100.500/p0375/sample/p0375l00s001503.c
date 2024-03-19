#include<stdio.h>

//#define MAX 10000

int main() {
    //3の倍数　または　３が含まれる数を出力する
    int x; //入力されるやつ
    int i, j; //処理用
    
    //入力
    scanf("%d", &x);
    
    //処理とか
    for (i=1; i<=x; i++) {
        j = i; //避難
        if (j % 3 == 0) {
            printf(" %d", j);
//            count ++; //カウンターを回す
//            hako[count] = j;
        }else{
            while (j) {
                if (j % 10 == 3) {
                    printf(" %d", j);
//                    count ++;
//                    hako[count] = j;
                    break;
                }
                j = j/10;
            }
        }
    }
    
    //出力
//    for (i=1; i<=count; i++) {
//        printf(" %d", hako[i]);
//    }
    printf("\n");
    
    return 0;
}

