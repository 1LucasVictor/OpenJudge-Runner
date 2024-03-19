#include<stdio.h>
int main(){
	int cards[5][14]={},j,m,i,n;
	char ch;
	scanf("%d", &n);
	for(i = 1;i <= n; i++){
		scanf(" %c %d",&ch,&m);
		if(ch== 'S'){
			cards[1][m]=m;
		}
		if(ch== 'H'){
			cards[2][m]=m;
		}
		if(ch=='C'){
			cards[3][m]=m;
		}
		if(ch=='D'){
			cards[4][m]=m;
		}
	}
	for(i = 1;i < 5; i++){
		for(j = 1;j < 14; j++){
			if(i==1 && cards[i][j]==0){
				printf("S %d\n",j);
			}
			if(i==2 && cards[i][j]==0){
				printf("H %d\n",j);
			}
			if(i==3 && cards[i][j]==0){
				printf("C %d\n",j);
			}
			if(i==4 && cards[i][j]==0){
				printf("D %d\n",j);
			}
		}
	}
}


