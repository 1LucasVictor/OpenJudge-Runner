#include<stdio.h>
int main(){
	int n,i;
	int money=100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		money+=(money*5)/100;
		if(money%1000>0){
			money+=1000-(money%1000);
	}
	}
	
	printf("%d\n",money);
	
	return 0;
}