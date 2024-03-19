#include<stdio.h>

int main(void)
{
	int cards[4][13] = {{0}};
	int n,i,j,k,rank;
	char m[4] = {'S','H','C','D'};
	char mark;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf(" %c %d",&mark,&rank);
                if(mark == 'S'){cards[0][rank] = 1;}
		if(mark == 'H'){cards[1][rank] = 1;}
		if(mark == 'C'){cards[2][rank] = 1;}
		if(mark == 'D'){cards[3][rank] = 1;}
	}
	for(j = 0;j < 4;j++){
		for(k = 1;k <= 13;k++){
			if(cards[j][k] == 0){
				printf("%c %d\n",m[j],k);
			}
		}
	}
	return 0;
}