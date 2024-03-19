#include <stdio.h>

int main()
{
	int A, B, K;
	scanf("%d %d %d", &A, &B, &K);

	int i=A;
	for(int k=0; k<K; i--){
		if((A%i==0) && (B%i==0)){
			k++;
		}
	}
	printf("%d\n", i+1);
	return 0;
}
