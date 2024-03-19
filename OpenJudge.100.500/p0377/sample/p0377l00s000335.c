#include<stdio.h>
int main()
{
	int n, card[4][13], number, s;
	char code;

	for(int i=0;i<=3;i++){
		for(int k=0;k<=12;k++){
			card[i][k]=0;
		}
	}

	scanf("%d",&n);

	for(int j=1;j<=n;j++){
		scanf("%s %d",&code,&number);
		if(code=='S'){
			card[0][number-1]=1;
		}else if(code=='H'){
			card[1][number-1]=1;
		}else if(code=='C'){
			card[2][number-1]=1;
		}else if(code=='D'){
			card[3][number-1]=1;
		}
	}

	for(s=0;s<=12;s++){
		if(card[0][s]==0){
			printf("S %d\n",s+1);
		}
	}

	for(s=0;s<=12;s++){
		if(card[1][s]==0){
			printf("H %d\n",s+1);
		}
	}

	for(s=0;s<=12;s++){
		if(card[2][s]==0){
			printf("C %d\n",s+1);
		}
	}

	for(s=0;s<=12;s++){
		if(card[3][s]==0){
			printf("D %d\n",s+1);
		}
	}
}

