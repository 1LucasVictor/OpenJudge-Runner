#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i, m, n, card[52];
	char suit;
	for(i=0; i<52; i++)
		card[i]=1;
	
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf(" %c %d",&suit,&m);
		switch(suit){
			case 'S':
			card[ 0*13 + m-1 ] = 0;
			break;
			case 'H':
			card[ 1*13 + m-1 ] = 0;
			break;
			case 'C':
			card[ 2*13 + m-1 ] = 0;
			break;
			case 'D':
			card[ 3*13 + m-1 ] = 0;
			break;
		}
	}
	for(i=0; i<52; i++){
		if(card[i]==1){
			switch(i/13){
				case 0:
				printf("S %d\n",i%13+1);
				break;
				case 1:
				printf("H %d\n",i%13+1);
				break;
				case 2:
				printf("C %d\n",i%13+1);
				break;
				case 3:
				printf("D %d\n",i%13+1);
				break;
			}
		}
	}
	
	return 0;
}