#include<stdio.h>
int main(void){
	int n,i;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%3==0||i%10==3){
			printf(" %d",i);
		}
		else if(10<i&&((i/10)%3)==0){
			printf(" %d",i);
		}
		else if(10<i&&((i/10)%10)==3){
			printf(" %d",i);
		}else{
			i=i;
		}
	}
	printf("\n");
	return 0;
}