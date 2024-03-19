#include <stdio.h>
#include<math.h>
 
int main() {
	int cardS[13]={0},cardH[13]={0},cardC[13]={0},cardD[13]={0};
	int mark=0,rank=0,i=0,n=0;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		scanf(" %c %d",&mark,&rank);
		
		if(mark=='S'){
			cardS[rank-1]=1;
		}
		else if(mark=='H'){
			cardH[rank-1]=1;
		}
		else if(mark=='C'){
			cardC[rank-1]=1;
		}
		else if(mark=='D'){
			cardD[rank-1]=1;
		}
	}
	
	for(i=1;i<=13;i++){
		if(cardS[i-1]==0){
			printf("S %d\n",i);
		}
	}
	for(i=1;i<=13;i++){
		if(cardH[i-1]==0){
			printf("H %d\n",i);
		}
	}
	for(i=1;i<=13;i++){
		if(cardC[i-1]==0){
			printf("C %d\n",i);
		}
	}
	for(i=1;i<=13;i++){
		if(cardD[i-1]==0){
			printf("D %d\n",i);
		}
	}
	



return 0;
}