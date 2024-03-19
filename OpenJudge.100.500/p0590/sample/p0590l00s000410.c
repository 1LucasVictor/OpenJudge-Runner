#include <stdio.h>

int main(void){
    int place[5];//アンテナA~Eの座標を格納する配列(入力のa,b,c,d,eに相当)
    int lim;//アンテナが直接通信可能な距離の最大値(入力のkに相当)
    int i,j;//カウンター変数
    int flag = 1;//flagが1ならすべてのアンテナは直接通信可能
    
    //入力のa~eをここで受け取る
    for(i = 0; i < 5; i++){
        scanf("%d", &place[i]);
    }
    
    //入力のkはここで受け取る
    scanf("%d", &lim);
    
    /*
    各アンテナA~Eについて自身よりも東側に位置するアンテナ全てとの距離を求める
    直接通信不可能なアンテナの組があったらflagを0にした上で内側のループを抜ける
    */
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if(place[j] - place[i] > lim){
                flag = 0;
                break;
            }
        }
    }
    
    //flagが1ならすべてのアンテナは直接通信可能　0なら直接通信不可能な組がある
    if(flag){
        puts("Yay!");
    }else{
        puts(":(");
    }
    
    return 0;
}