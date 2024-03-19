/* ex3_4
   kohei0713 */

#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    int number;
    bool answer = false;
    
    //input
    scanf("%d", &number);

    //1から9まで繰り返す
    for(int i = 1; i < 10; i++){
        //numberがiで割り切れ,商が9以下のときanswerをtrueにし,ループから抜け出す
        if(number % i == 0 && number / i < 10){
            answer = true;
            break;
        }
    }

    //answerがtrueなら"Yes",falseなら"No"を出力
    if(answer){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}