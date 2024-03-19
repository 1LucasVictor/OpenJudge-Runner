    //AtCoder Beginner Contest 133 目指せ3冠、勝ち取れ内定(⊙ꇴ⊙)

#include <stdio.h>
int main(void){
    //変数宣言ここから٩(ˊᗜˋ*)و
    
    char s[100001];
    long long int n,i,j,count;
    long long int l,r;
    long long int min = 9223372036854775807;
    int mode = 0;
    
    //入力処理ここから٩(ˊᗜˋ*)و
    
    scanf("%lld %lld",&l,&r);
    
    //処理部分ここから٩(ˊᗜˋ*)و
    
    if (l % 2019 == 0){
        mode = 1;
        min = 0;
    }
    
    if (mode == 0){
        for (i = l; i <= r - 1; i++){
            if (i % 2019 == 0){
                min = 0;
                break;
            }
            for (j = l + 1; j <= r; j++){
                count = ((i * j) % 2019);
                if (min > count){
                    min = count;
                    if (min == 0){
                        break;
                    }
                }
                if (j % 2019 == 0){
                    min = 0;
                    break;
                }
            }
            if (min == 0){
                break;
            }
        }
    }
        
    //出力処理ここから٩(ˊᗜˋ*)و
    
    printf("%lld",min);
    
}
