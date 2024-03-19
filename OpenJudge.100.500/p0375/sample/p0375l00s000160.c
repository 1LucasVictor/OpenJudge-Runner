#include<stdio.h>

int main(){

	int n,i;	
	scanf("%d\n",&n);

	for(i=3; i<=n; i++){
		if(i%3==0)	
			printf(" %d",i);
		else if(i%10==3)	
			printf(" %d",i);
	}
	printf("\n");
	return 0;
}