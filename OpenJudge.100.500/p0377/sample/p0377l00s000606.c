#include <stdio.h>

int main(){

	int n,i,j,N;
	char M;
	scanf("%d",&n);
	
	int x[4][13];
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			x[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++){
	
		scanf(" %c %d",&M,&N);
	
		if(M=='S'){x[0][N-1]=1;}
		if(M=='H'){x[1][N-1]=1;}
		if(M=='C'){x[2][N-1]=1;}
		if(M=='D'){x[3][N-1]=1;}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<13;j++){
			if(x[i][j]==0 &&i==0){printf("S %d\n",j+1);}
			if(x[i][j]==0 &&i==1){printf("H %d\n",j+1);}
			if(x[i][j]==0 &&i==2){printf("C %d\n",j+1);}
			if(x[i][j]==0 &&i==3){printf("D %d\n",j+1);}
		}
	}
	
	return 0;

}