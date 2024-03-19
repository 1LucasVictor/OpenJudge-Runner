#include <stdio.h>

const int Num = 200001; //defineよりいいらしい
int times; //how many times
    
int max_profit(int *price);

int main () {

    int price[Num];
    int i; 
    
    scanf ("%d",&times);
    
    for (i = 0;i < times;i ++) {
        scanf ("%d",&price[i]);
    }
    
    printf ("%d",max_profit(price) );
    return 0;
}

int max_profit(int *price) {
    int i;
    int maxsa = 0,min; //=0 の初期化　命
    //max差　ただ最小値
    
    /*ただただ差だけを考えないと事故る
      全走査しないと*/
    min = price[0];
    for (i = 0;i < times;i ++) {
        maxsa = (maxsa < price[i] - min) ? (price[i] - min) : maxsa;
        min = (min > price[i]) ? price[i] : min; 
    }
    return maxsa;
}
