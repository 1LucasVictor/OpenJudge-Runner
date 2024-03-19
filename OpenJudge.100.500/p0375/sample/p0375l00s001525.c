#include<stdio.h>
int main(void){
	int n,i;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%3==0 || i%10==3 || i/10==3 || i/10==13 || i/10==23 || i/10==33 || i/10==43 || i/10==53 || i/10==63 || i/10==73 || i/10==83 || i/10==93)
			printf(" %d",i);
		}
	printf("\n");
		
	return 0;
}