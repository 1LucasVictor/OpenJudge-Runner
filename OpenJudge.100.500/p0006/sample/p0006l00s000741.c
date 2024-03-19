#include<stdio.h>


int main (void){
	
	int n,debt,i,amari,real;
	
	scanf("%d",&n);
	debt = 100000;
	for(i=0;i<n;i++){
		
		debt = debt*1.05;
	}
	
	amari = debt%10000;
	
	if(amari != 0){
		real = debt - amari + 10000;
	
	printf("%d\n",real);
	}else{
		printf("%d\n",debt);	
	}

return 0;
}