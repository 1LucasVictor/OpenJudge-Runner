#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(void){
	
	int n,i;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		if(i%3 == 0 || i%10 == 3)printf(" %d",i);

		
	}
	printf("\n");
return 0;}