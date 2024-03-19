#include <stdio.h>

int main(void)
{
	int D,N;
	
	scanf("%d %d", &D,&N);
	
	if(D == 0 && N >= 1 && N <= 100){
		printf("%d",N);
	}else if(D == 1 && N >= 1 && N <= 100){
		printf("%d", N*100);
	}else if(D == 2 && N >= 1 && N <= 100){
		printf("%d", N*10000);
	}
	
	return 0;
}
