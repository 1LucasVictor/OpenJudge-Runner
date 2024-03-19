#include<stdio.h>

int main(void){
	int N,a100,a10,a;
	
	scanf("%d",&N);
	
	a=N%10;
	a10=N%100-a;
	a100=N-a10-a;
	
	
	if(a==7){
		printf("Yes\n");
	}
	else if((a10/10)==7){
		printf("Yes\n");
	}
	else if(a100/100==7){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	
	return 0;
}