#include<stdio.h>

int main(){
	int n;
	int i;
	int debt;
	debt = 100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		debt *= 1.05;
	}
	if(debt/10000>0){
		debt = (debt/10000 + 1) * 10000;
	}
	printf("%d\n",debt);
	return 0;
}