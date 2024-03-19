#include <stdio.h>

int main(void){
	int X;
	int A;
	int B;
	scanf("%d%d%d",&X,&A,&B);
	
	if(1<=X<=10^9 && 1<=A<=10^9 && 1<=B<=10^9){
	
	if(A > B){
		printf("delicious");
	}else if(B - A < X && A < B){
		printf("safe");
	}else if(B - A > X && A < B){
		printf("dangerous");
	}
	}else{
		printf("ERROR");
	}
}
	
