/*  ex3_4
    ruuu0048 */
#include <stdio.h>

int main(void){

    int number; //Nの変数を宣言

    scanf("%d",&number); //変数にNの数を入力する

    int yes_no = 0; //0より大きかったらYes、0だったらNoと出力するための変数を宣言


    //一回でもi*jがNと一致したらyes_noが0より大きくなるにする

    for ( int i = 1; i <= 9; i += 1) //iが1から9まで計算する
    {
        for(int j = 1; j <= 9; j += 1){ //jが1から9まで計算する
            if(number == i * j){ //i*jがNと一致したら
                yes_no += 1; //1足す
            }
        }
    }
    
    if(yes_no > 0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    
    return 0; 
}