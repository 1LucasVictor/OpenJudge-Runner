#include <stdio.h>

int main(void) {
	int n,i,j,num;
	int cards[4][13]={};
	char mark,kindmark[] = {'S', 'H', 'C', 'D'};

	scanf("%d",&n);
	for(i=0;i<n+1;i++){
		scanf("%c %d%*c",&mark,&num);

		switch(mark){
			case 'S':
				cards[0][num-1]=1;
				break;
			case 'H':
				cards[1][num-1]=1;
				break;
			case 'C':
				cards[2][num-1]=1;
				break;
			case 'D':
				cards[3][num-1]=1;
				break;
		}
	}
	for(i=0;i<=3;i++){
		for(j=0;j<13;j++){
			if(cards[i][j]==0){
				printf("%c %d\n",kindmark[i],j+1);
			}
		}
	}
	return 0;
}