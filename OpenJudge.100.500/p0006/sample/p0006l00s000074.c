#include<stdio.h>


int main (void){
	
	int n,debt,i,amari;
	scanf("%d",&n);
	debt = 100000;
	for(i=0;i<n;i++){
		debt *=1.05;
		amari = debt%1000;
	if(amari != 0){
		debt = debt - amari + 1000;
	}
}
	printf("%d\n",debt);	
	
return 0;
}