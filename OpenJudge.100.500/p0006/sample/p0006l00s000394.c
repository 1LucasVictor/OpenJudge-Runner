#include<stdio.h>

int main(){
	int money=100000, week;
	int i;
	scanf("%d",&week);
	for(i=0;i<week;i++){
		money*=1.05;
		if(money%1000>0){
			money-=money%1000;
			money+=1000;
		}
	}
	printf("%d\n",money);
	return 0;
}