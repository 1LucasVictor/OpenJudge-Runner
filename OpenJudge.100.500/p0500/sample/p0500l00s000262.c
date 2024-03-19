#include <stdio.h>

int main(void)
{
    int N, M, i, j,keta_tmp;
    int s[10],c[10];
    int suuzi[3] = {-1,-1,-1};

    scanf("%d %d",&N,&M);

    for(i=0; i<M; i++){
        scanf("%d %d",&s[i],&c[i]);
    }

    for(i=0; i<M; i++){//左からs[i]桁目がc[i]である
        keta_tmp = s[i]-1;
        if((keta_tmp == 0) && (c[i] == 0)){//一番上の桁が0の場合は存在しないので-1
            printf("-1\n");
            return 0;
        }
        if((suuzi[keta_tmp] == -1)||(suuzi[keta_tmp] == c[i])){//未入力か一緒の場合
            suuzi[keta_tmp] = c[i];
        } else {//一つの桁に違う数字を指定された場合
            printf("-1\n");
            return 0;
        }
    }

    for(i=0; i<N; i++){
        if(suuzi[i] == -1){
            if(i==0){
                printf("1");
            } else {
                printf("0");
            }
        } else {
            printf("%d",suuzi[i]);
        }
        //-1の時は0を代入するっていうのを後で書く
        //一番上の桁が指定されてない時は1
    }
    printf("\n");

    return 0;
}