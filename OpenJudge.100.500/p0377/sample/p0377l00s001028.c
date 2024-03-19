#include<stdio.h>

int main(){
	int i,j;
	int n;
	char suit;
	int num;
	int card[4][14];

	for(i=0;i<14;i++){
		card[0][i]=0;
		card[1][i]=0;
		card[2][i]=0;
		card[3][i]=0;
	}
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf(" %c %d",&suit,&num);
		if(suit=='S') card[0][num]=num;
		if(suit=='H') card[1][num]=num;
		if(suit=='C') card[2][num]=num;
		if(suit=='D') card[3][num]=num;
	}
	for(i=0;i<4;i++){
		for(j=1;j<=13;j++){
			if(card[i][j]!=j){
				if(i==0) printf("S %d\n",j);
				if(i==1) printf("H %d\n",j);
				if(i==2) printf("C %d\n",j);
				if(i==3) printf("D %d\n",j);
			}
		}
	}
	return 0;
}