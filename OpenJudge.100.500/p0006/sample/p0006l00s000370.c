#include<stdio.h>


int interest(int a){
	a*=1.05;
	if(a % 1000 != 0){
		a-=a%1000;
		a+=1000;
	}
	return a;
}
	
int main(void){
	int n,debt;
	int i;
	
	debt=100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		debt = interest(debt);
	}
	printf("%d\n",debt);
	return 0;
}