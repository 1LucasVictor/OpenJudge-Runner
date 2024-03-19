#include <stdio.h>

int main()
{
	int A,B,K;

	scanf("%d",&K);
	scanf("%d %d",&A,&B);

	if (B - A > K){
		printf("OK\n");
	}else{
		printf("NO\n");
	}

	return 0;
}
