#include <stdio.h>

int main(void)
{
	int D, N;
	
	scanf("%d %d", &D, &N);
	
	if(D == 0){
		if(N >= 100)
			printf("%d", 99);
		else
			printf("%d", N);
	}
	else if(D == 1){
		if(N >= 100)
			printf("%d", 9900);
		else
			printf("%d", N*100);
	}
	else if(D == 2){
		if(N >= 100)
			printf("%d", 990000);
		else
			printf("%d", N*10000);
	}
	
	return 0;
}
