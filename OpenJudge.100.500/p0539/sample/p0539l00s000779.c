/*ex3_4
    takafumi_ueki*/
#include <stdio.h>
int main(void){
    int N;
    scanf("%d",&N);
    /*例えば,Nを2で割った余りが０（２で割り切れる）かつ
    ２で割った商が10未満だったら一桁の整数同士の掛け算で表せるということなので、それを3,4,5,,,,と調べる。*/
    if(((N%1 == 0)&&((N/1)<10))||((N%2 == 0)&&((N/2)<10))||((N%3 == 0)&&((N/3)<10))||((N%4 == 0)&&((N/4)<10))||((N%5 == 0)&&((N/5)<10))||((N%6 == 0)&&((N/6)<10))||((N%7 == 0)&&((N/7)<10))||((N%8 == 0)&&((N/8)<10))||((N%9 == 0)&&((N/9)<10))){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}