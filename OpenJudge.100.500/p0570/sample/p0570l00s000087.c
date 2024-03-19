#include<stdio.h>

int main(){
	int A;
	int B;//A!=B;
	int K;

	scanf("%d %d",&A,&B);

    K=(A+B)/2;

	if((A+B)%2==0){
		printf("%d",K);
	}else{
		printf("IMPOSSIBLE");
	}

	return 0;
}