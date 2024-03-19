#include<stdio.h>
#include<limits.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>

#define CARD_TOTAL_NUM (52)
enum Card_types {
	S,
	H,
	C,
	D,
	TOTAL
};

int main(){
	int n=0;


	bool Poss_card[TOTAL][CARD_TOTAL_NUM/4]={false};


	scanf("%d",&n);

	for(int i=0;i<n;i++){
		char card_type=0;
		int num=0;

		scanf("\n%c %d",&card_type,&num);
		//printf("i=%2d: num=%d\n",i,num);
		switch (card_type) {
		case 'S':
			Poss_card[S][num-1]=true;
			break;
		case 'H':
			Poss_card[H][num-1]=true;
			break;
		case 'C':
			Poss_card[C][num-1]=true;
			break;
		case 'D':
			Poss_card[D][num-1]=true;
			break;
		default:
			break;
		}
		for(int i=0;i<TOTAL;i++){
		}
	}
	for(int i=0;i<TOTAL;i++){
		for(int j=0;j<CARD_TOTAL_NUM/4;j++){
			if(Poss_card[i][j]==false){
				switch (i){
				case S:
					printf("S ");
					break;
				case H:
					printf("H ");
					break;
				case C:
					printf("C ");
					break;
				case D:
					printf("D ");
					break;
				default:
					break;
				}
				printf("%d\n",j+1);
			}
		}
	}


	return 0;
}


