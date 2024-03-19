/* ex3_4 
　　　　　sachiyan*/

#include <stdio.h>
int main(void){
    int N; //入力Nの定義
    int i,j; //while内変数の定義
    scanf("%d", &N); //Nの読み取り
    i = 1;
    while(i <= 9){ //二重のループを０－９までで回して九九の解をすべてしらべる
        j = 1;
        while(j <= 9){
            if(i*j == N){ //九九を総当たりで探し、Nと等しければ
                printf("Yes"); //Yesを出力しendの行まで飛ぶ
                goto end; //endの行まで飛ぶ
            }
            j++;
        }
        i++;
    }
    if(i == 10 && j == 10){ //九九全てに当てはまらないとき
        printf("No"); //Noを出力
    }
    end:
        printf("\n"); //改行を出力
    return 0;
}