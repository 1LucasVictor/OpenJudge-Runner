/*ex3_4
    takafumi_ueki*/
#include <stdio.h>
int main(void){
    int x,i;
    int flag = 0;
    scanf("%d",&x);
    /*例えば,xを2で割った余りが０（２で割り切れる）かつ
    ２で割った商が10未満だったら一桁の整数同士の掛け算で表せるということなので、それを3,4,5,,,,と調べる。*/
    for(i = 1; i <= 9; i++){
        if((x%i == 0)&&(x/i)<10){
            printf("Yes\n");
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("No\n");
    }
    return 0;
}
