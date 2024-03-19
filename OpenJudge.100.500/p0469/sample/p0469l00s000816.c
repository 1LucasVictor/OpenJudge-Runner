#include<stdio.h>

int main(){
	int A, B, K;
	scanf("%d", &K);
	scanf("%d %d", &A, &B);
	if(B-A == 0 || K == 1){
		printf("OK\n");
	}else{
		if((K - A%K) <= (B-A)){
			printf("OK\n");
		}else{
			printf("NG\n");
		}
	}
	return 0;
}