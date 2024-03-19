#include<stdio.h>
int main(void){
	int A,B,K,i,x;
	scanf("%d %d %d",&K,&A,&B);
	x=0;
	for(i=A;i<=B;i++){
		if(i%K==0){
			x=1;
		}
	}
	if(x==1){
		printf("OK\n");
	}
	if(x==0){
		printf("NG\n");
	}
	return 0;
}