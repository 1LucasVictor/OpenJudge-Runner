/*  ex3_4: 81
    Jun_JPN */

#include <stdio.h>

int main(void){

    int num, i, j;
    int judge = 0;

    scanf("%d", &num);

    while(1){
        for(i=1; i<10; i++){    // numが「九九」の結果にあるか判定する
            for(j=1; j<10; j++){
                if (num == i*j){
                    judge = 1;  // numが「九九」の結果にある場合，judgeに1が代入される
                }
            }
        }
        if (judge){ // judgeが1（True）ならばYesを出力
            printf("Yes\n");
            break;
        }else{
            printf("No\n");
            break;
        }
    }

    return 0;
}