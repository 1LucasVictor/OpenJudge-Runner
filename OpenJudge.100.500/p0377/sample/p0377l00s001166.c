#include<stdio.h>
int main(){
	int i, x[52]={}, n, y, z=1;
	char m;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf(" %c %d", &m, &y);
		if(m=='S'){
			x[y-1]=y;
		}else if(m=='H'){
			x[y+12]=y;
		}else if(m=='C'){
			x[y+25]=y;
		}else if(m=='D'){
			x[y+38]=y;
		}
	}
	for(i=0;i<52;i++){
		if(x[i]!=z && i <= 12){
			printf("S %d\n", i+1);
		}else if(x[i]!=z && i <= 25){
			printf("H %d\n", i-12);
		}else if(x[i]!=z && i <= 38){
			printf("C %d\n", i-25);
		}else if(x[i]!=z && i <= 51){
			printf("D %d\n", i-38);
		}
		z++;
		if(z==14){
			z=1;
		}
	}
}
		
	
