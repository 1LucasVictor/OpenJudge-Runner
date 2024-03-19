#include<stdio.h>
int main(void){
	int A,B,C,K,max;
	scanf("%d %d %d %d",&A,&B,&C,&K);
	if(K<=A){
		max=K;
	}
	if((A<K)&&(K<=A+B)){
		max=A;
	}
	if((A+B)<K){
		max=A-(K-A-B);
	}
	printf("%d\n",max);
}