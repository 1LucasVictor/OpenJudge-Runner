#include <stdio.h>

int main(void){
	int X;
	int A;
	int B;
	scanf("%d%d%d",&X,&A,&B);
	
	if(A > B){
		printf("delicious");
	}else if(B - A < X && A < B){
		printf("safe");
	}else if(B - A > X && A < B){
		printf("dangerous");
	}
}
	
