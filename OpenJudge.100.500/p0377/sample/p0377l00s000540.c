#include <stdio.h>

int main(void) {
	int n,i,j,t;
	int data[4][13];
	char c;
	char gara[4]={'S','H','C','D'};
	scanf("%d",&n);
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			data[i][j]=0;
		}
	}
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf(" %c",&c);
		scanf("%d",&t);
		if(c=='S'){
			data[0][t-1]=1;
		}else if(c=='H'){
			data[1][t-1]=1;
		}else if(c=='C'){
			data[2][t-1]=1;
		}else if(c=='D'){
			data[3][t-1]=1;
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(data[i][j]==0){
				printf("%c %d\n",gara[i],j+1);
			}
		}
	}
	
	return 0;
}