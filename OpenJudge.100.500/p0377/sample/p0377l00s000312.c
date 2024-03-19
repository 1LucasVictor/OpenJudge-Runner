#include <stdio.h>

int main(void)
{
	int i,j,N,M;
	char k;
	int card[4][14];
	
	for(i=0;i<4;i++){
		for(j=1;j<14;j++){
			card[i][j] = 0;
		}
	}
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%s",&k);
		scanf("%d",&j);
		if(k=='S'){
			M=0;
		}
		else if(k=='H'){
			M=1;
		}
		else if(k=='C'){
			M=2;
		}
		else if(k=='D'){
			M=3;
		}
		card[M][j]=1;
	}
		for(i=0;i<4;i++){
			for(j=1;j<14;j++){
				if(card[i][j]==0){
					if(i == 0){
						printf("S %d\n",j);
					}
					else if(i == 1){
						printf("H %d\n",j);
					}
					else if(i == 2){
						printf("C %d\n",j);
					}
					else if(i == 3){
						printf("D %d\n",j);
					}
				}
			}
		}
		return 0;
	}