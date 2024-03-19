#include<stdio.h>
int main(void){
	int n,i,x,j;
	int card[4][13]={};
    char M;
	
	scanf("%d",&n);
	for(i = 0;i < n+1;i++){
		scanf("%c %d%*c",&M ,&x);
		if(M == 'S'){
			card[0][x-1]=1;
		}else if(M =='H'){
			card[1][x-1]=1;
		}else if(M == 'C'){
			card[2][x-1]=1;
		}else if(M == 'D'){
			card[3][x-1]=1;
		}
	}
	for(i = 0;i < 4;i++){
		for(j = 0;j < 13;j++){
			if(card[i][j] == 0){
			if(i == 0){
				printf("S %d\n",j+1);
		}else if(i == 1){
			printf("H %d\n",j+1);
		}else if(i == 2){
			printf("C %d\n",j+1);
		}else if(i == 3){
			printf("D %d\n",j+1);
		}
		}
	}
	}
return 0;
}