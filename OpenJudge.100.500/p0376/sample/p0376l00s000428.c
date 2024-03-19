#include<stdio.h>

int main(void){
	int n,x,date[100],i=0;
	
	scanf("%d",&n);
	
	while(i != n){
		scanf("%d",&date[i]);
		++i;
	}
	
	i = 0;
	
	while(i != n/2){
		x = date[i];
		date[i] = date[n-i-1];
		date[n-i-1] = x;
		++i;
	}
	
	i = 0;
	
	while(1){
		printf("%d",date[i]);
		if(i == n-1){break;}
		printf(" ");
		++i;
	}
	
	printf("\n");
	
	return 0;
}