#include<stdio.h>
int main(void){
	
	int n,i,x;
	scanf("%d",&n);
	
	for(i=3;i<=n;i++){
		x=i;
		if(x%3==0){
			printf(" %d",i);
		}else{
			while(x){
				if(x%10==3){
					printf(" %d",i);
				}
				x/=10;
			}
		}
	}
	printf("\n");
	return 0;
}