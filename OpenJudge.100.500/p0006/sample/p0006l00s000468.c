#include<stdio.h>
int main(void){
	
	int money,i,n,k,num;
	
	money = 100000;
	
	scanf("%d",&n);
	
	for( i=0;i<n;i++ ){
		
		money *= 1.05;
		num = money /1000;
		k = money % 1000;
		
		if( k > 0 ){
			
			money = (num * 1000) + 1000;
			
		}
		
	}
	
	printf("%d\n",money);
	
	return 0;
}