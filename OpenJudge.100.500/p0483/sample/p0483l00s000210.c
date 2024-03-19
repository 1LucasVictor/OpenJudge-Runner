#include <stdio.h>

int main()
{
	int L,M,N;

	scanf("%d",&N);
	M = N - (int)(N / 100) * 100;
	L = N % 10;

	if ((int)(N / 100) == 7 || M == 7 || L == 7){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
}
