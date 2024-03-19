/* ex3_4 melo */
#include <stdio.h>
int main(void){
    int Num, Result, N1, N2;//４つの整数の箱を作る
    int TorF=0;//Numが1以上9以下の2つの整数の積として表すことができるれば1、できなければ0を返す整数の箱を作り0を代入する
    scanf("%d",&Num);//Numに整数を代入する
        for(N1=1;N1<10;N1++){//九九を行う
            for(N2=1;N2<10;N2++){
                Result=N1*N2;//九九の結果を代入
                if(Num==Result){//九九の結果の中にNumと一致する値があれば
                    TorF=1;//1以上9以下の2つの整数の積として表すことができる
                }
            }
        }
        if(TorF==1){//1以上9以下の2つの整数の積として表すことができる
            printf("Yes\n");
        }else{//1以上9以下の2つの整数の積として表すことができない
            printf("No\n");
        }

        return 0;
    }