#include<stdio.h>
int main(void){
	int n,i,x;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		x=i;
		if(x%3==0){
			printf(" %d",i);
		}else if(x%10==3 || x/10==3){
			printf(" %d",i);
		}
	}
	printf("\n");
	return 0;
}