#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIDE_NUM 3
#define DATA_MAX 1000

void swap(int *a, int *b);

int main(void){
	int dataNum;
	int side[DATA_MAX][SIDE_NUM];
	int i,j;
	bool endFlg = false;

	/*総データ数取り込み*/
	scanf("%d", &dataNum);

	for(i=0; i<dataNum; ++i){
		/*三角形データ取り込み*/
		for(j=0; j<SIDE_NUM; ++j){
			scanf("%d", &side[i][j]);
		}

		/*ソート*/
		while(endFlg == false){
			endFlg = true;
			for(j=0; j<2; ++j){
				if(side[i][j]<side[i][j+1]){
					swap(&side[i][j], &side[i][j+1]);
					endFlg = false;
				}
			}
		}
	}

	for(i=0; i<dataNum; ++i){
		/*直角三角形かどうか(三平方の定理を満たすかどうか)の判定*/
		if((side[i][0] * side[i][0]) - ((side[i][1] * side[i][1]) + (side[i][2] * side[i][2])) == 0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}

	}
	return 0;
}

void swap(int *a, int *b) {
    *b ^= *a;
    *a ^= *b;
    *b ^= *a;
}

