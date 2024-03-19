/* ex3_4
   KKOO  */

#include <stdio.h>

int main(void) {
    int num,i,j,result;
    //整数の入力
    scanf("%d",&num);

    //九九の計算
    i = 0;
    j = 0;
    result=0;
    for(i=1; i < 10; i++){
        for(j=1; j < 10; j++){
            //九九が一致したらresultを1にする
            if(i*j == num){
                result = 1;
            }
        }
    }

    //resultが1ならYes
    if(result == 1){
        printf("Yes\n");
    }
    //resultが0ならNo
    else{
        printf("No\n");
    }

    return 0;
}
