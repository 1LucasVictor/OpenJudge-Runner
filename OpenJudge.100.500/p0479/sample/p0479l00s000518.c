#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N,M;
    int *ip; //A_i
    int *count;
    int i;
    int j;
    //入力
    scanf("%d",&N);
    //メモリの確保
    ip =(int *)malloc((N-1)*sizeof(int)); //ipにN個のint領域を確保
    count =(int *)malloc((N)*sizeof(int)); //ipにN個のint領域を確保

    for (i=0;i<N-1;i++){
        scanf("%d",&ip[i]);
    }
    for(i=0;i<N;i++){
        count[i]=0; //初期化
    }
    //計算処理
    for(i=1;i<N;i++){
        for(j=0;j<N-1;j++){
            if(ip[j]==i){
                count[i-1]+=1;
            }
        }   
    }
    //最終出力 
    for(i=0;i<N;i++){
        printf("%d\n",count[i]);

    }
    free(ip);
    free(count);
    return 0;
}