#include <stdio.h>

int main(void)
{
	int A,B,C,K,total=0;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	scanf("%d",&K);
	if(A>K){
		total=K;
		K=0;
	}else{
		total+=A;
		K-=A;
	}
	K-=B;
	if(K>0)total-=K;
	printf("%d",total);
	return 0;
}