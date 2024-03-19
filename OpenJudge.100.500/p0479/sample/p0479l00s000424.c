#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N;
    int *ip; //A_i
    int *count;
    int i;
    int j;
    //N入力
    while(scanf("%d",&N)!=1);
    //メモリの確保
    ip =(int *)malloc((N-1)*sizeof(int)); //A_i
    count =(int *)malloc((N)*sizeof(int)); //出力
    //A_i 入力
    for (i=0;i<N-1;i++){
        while(scanf("%d",&ip[i])!=1);
    }
    //出力結果初期化
    for(i=0;i<N;i++){
        count[i]=0;
    }
    //計算処理
    for(i=0;i<N-1;i++){
        count[ip[i]-1]+=1;
    }
    //最終出力 
    for(i=0;i<N;i++){
        printf("%d\n",count[i]);
    }
    free(ip);
    free(count);
    return 0;
}