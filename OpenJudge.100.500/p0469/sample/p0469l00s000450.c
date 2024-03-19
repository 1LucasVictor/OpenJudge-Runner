#include<stdio.h>

int main(void){

	int K, A, B, Ad, Bd;

	scanf("%d", &K);
	scanf("%d %d", &A, &B);

	Ad = A / K;
	Bd = B / K;



	if(Bd - Ad >= 1 || A % K == 0 || B % K == 0)
		printf("OK");
	else
		printf("NG");

	return 0;

}