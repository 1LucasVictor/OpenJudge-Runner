#include<stdio.h>

int main(){
	int A;
	int B;
	int C;

	scanf("%d %d %d",&A,&B,&C);

	if(C-A+B>=0){
		printf("%d",C-A+B);
	}else{
		printf("0");
	}

	return 0;
}