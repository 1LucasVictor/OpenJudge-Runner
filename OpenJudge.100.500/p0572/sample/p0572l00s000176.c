/* ABC133-C.c
   Takatan */

#include<stdio.h>
#define NUM 2019
int main(void){
    int left, right, min, judge, i, j;

    min = 2018;

    scanf( "%d %d" , &left, &right); /* 入力 */

    if(right>left+NUM){ /* NUMの倍数が含まれるとき */

        printf( "0\n" ); /* あまりの最小値は0になる */

        return 0;

    }

    right = right-left;
    left = left%NUM;
    right = right + left; /* 法NUMとしてleftと合同かつ正の最小値となる値に変換 */

    for(i=left; i < right; i++){

        for(j=i+1; j <= right; j++){

            judge = (i * j) % NUM; /* judgeするあまりを求める */

            if(judge<min){ /* judgeが暫定最小となるとき */

                min = judge; /* 最小値を更新 */

            }

            if(min==0){

                printf( "%d\n" , min);

                return 0;

            }

        }

    }

    printf( "%d\n" , min);

    return 0;
}