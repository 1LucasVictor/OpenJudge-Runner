#include <stdio.h>

int main(void)
{
	int card[4][13]={0};
	int i,j,n;
	char marks[4]={'S','H','C','D'};
	char mark;
	int num;
	
	scanf("%d",&n);
	for(i=0;i<n*2;i++){
		scanf("%c %d",&mark,&num);
		switch(mark){
			case 'S':
				card[0][num-1]=1;
				break;
			case 'H':
				card[1][num-1]=1;
				break;
			case 'C':
				card[2][num-1]=1;
				break;
			case 'D':
				card[3][num-1]=1;
				break;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(card[i][j]==0) printf("%c %d\n",marks[i],j+1);
		}
	}
	
	return 0;
}