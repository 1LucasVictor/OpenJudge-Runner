#include<stdio.h>

int main(void){
	int money=100000,week;
	int i;
	
	scanf("%d",&week);
	for(i=0;i<week;i++){
		money*=1.05;
		if(money%1000!=0){
			money=(money-money%1000)+1000;
		}
	}
	
	printf("%d\n",money);
	
	return 0;
}