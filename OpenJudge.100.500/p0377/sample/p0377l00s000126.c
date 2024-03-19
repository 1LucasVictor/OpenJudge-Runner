#include<stdio.h>
int main(void){
	
	int c[4][13];
	int n,m,i,j;
	char e;
	
	for(i=0;i<4;i++){
		for(j=1;j<=13;j++){
			c[i][j]=0;
		}
	}
	
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%c",&e);
		scanf("%c %d",&e,&n);
		if(e=='S'){
			c[0][n]=1;
		}else if(e=='H'){
			c[1][n]=1;
		}else if(e=='C'){
			c[2][n]=1;
		}else if(e=='D'){
			c[3][n]=1;
		}
	}
	for(i=0;i<4;i++){
		for(j=1;j<=13;j++){
			if(i==0 && c[i][j]!=1)printf("S %d\n",j);
			else if(i==1 && c[i][j]!=1)printf("H %d\n",j);
			else if(i==2 && c[i][j]!=1)printf("C %d\n",j);
			else if(i==3 && c[i][j]!=1)printf("D %d\n",j);
		}
	}
	
	return 0;
}
