/* ex3_2 
　　　　　sachiyan*/

#include <stdio.h>
int main(void){
    int NUM; //Nを定義
    scanf("%d", &NUM); //入力値Nの読み取り
    if(NUM%10 == 3){ //Nを10で割った余りでNの一の位を与える。一の位が３のとき
        printf("bon\n"); //bonを出力
    }
    else if(NUM%10 == 0 || NUM%10 == 1 || NUM%10 == 6 || NUM%10 == 8){ //一の位が0,1,6,8のとき
        printf("pon\n"); //ponを出力
    }
    else{ //一の位が3,0,1,6,8以外のとき、つまり2,4,5,7,9のとき
        printf("hon\n"); //honを出力
    }
    return 0;
}
