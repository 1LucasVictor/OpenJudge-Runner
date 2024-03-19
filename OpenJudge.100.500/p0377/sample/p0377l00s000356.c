#include<stdio.h>
int main(){
	int i,n,c[5][14],m,j;
	char d;
	scanf("%d",&n);
	for(i=1;i<5;i++){
		for(j=1;j<14;j++){
			c[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		scanf(" %c %d",&d,&m);
		if(d=='S'){
			c[1][m]=m;
		}else if(d=='H'){
			c[2][m]=m;
		}else if(d=='C'){
			c[3][m]=m;
		}else if(d=='D'){
			c[4][m]=m;
		}	
	}
	for(i=1;i<5;i++){
		for(j=1;j<14;j++){
			if(i==1 && c[i][j]==0){
				printf("S %d\n",j);
			}else if(i==2 && c[i][j]==0){
				printf("H %d\n",j);
			}else if(i==3 && c[i][j]==0){
				printf("C %d\n",j);
			}else if(i==4 && c[i][j]==0){
				printf("D %d\n",j);
			}
		}
	}
}
