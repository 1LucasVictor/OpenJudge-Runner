#include <stdio.h>

int judge(int a,int b,int k)
{
	for (int i = a;i <= b;i++){
			if (i % k == 0)return 1;
		}

	return 2;
}

int main()
{
	int A,B,K;

	scanf("%d",&K);
	scanf("%d %d",&A,&B);

	if (judge(A,B,K) == 1){
		printf("OK\n");
	}else{
		printf("NG\n");
	}

	return 0;
}
