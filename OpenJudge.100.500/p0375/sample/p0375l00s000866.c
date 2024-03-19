#include<stdio.h>


void call(int n){
	int i;
	
	for(i=3;i<=n;i++){
		if(i%3==0){
			printf(" %d",i);
		}else if(i%10==3){
			printf(" %d",i);
		}else if(i/10==3){
			printf(" %d",i);
		}else if(i/100==3){
			printf(" %d",i);
		}else if(i/1000==3){
			printf(" %d",i);
		}else if(i/10000==3){
			printf(" %d",i);
		}
	}
	printf("\n");
}

int main(){
	int n;
	
	scanf("%d",&n);
	call(n);
	
	return 0;
}