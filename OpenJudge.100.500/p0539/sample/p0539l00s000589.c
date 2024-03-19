/* ex3_4
   kento_titech*/
#include<stdio.h>
int main(void){
    int i;
    int N,n,r;//N,n,rが変数
    scanf("%d",&N);
    for(i=1;i<10;++i){//forループで１０より小さい数で割ったとき商が1~9になりかつあまり0の場合を考える
        n=N/i;
        r=N%i;
        if(0<n && n<10 && r==0){
            printf("Yes\n");
            break;
        }
    }
    if(i==10){
        printf("No\n");
    }
    return 0;
}