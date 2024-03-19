/* ex3_4
	kanon */

#include <stdio.h>

int main(void)
{

    //与えられる値を入れる変数を宣言
    int N;

    //変数に値を入力する
    scanf("%d", &N);

    //九九に含まれる値全てについてNと一致しないか調べる
    //一致すればflagを１にする、flagを使って答えの出力の場合分けをする
    int flag=0;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i*j==N){
                flag=1;
                break;
            }
        }

        if(flag){
            break;
        }
    }

    //答えの出力
    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}