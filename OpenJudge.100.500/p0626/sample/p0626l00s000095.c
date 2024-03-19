#include <stdio.h>

int main(void)
{
	int N;
	int D;
	
	scanf("%d %d",&D, &N);
	
	if(D == 1){
		printf("%d\n", N * 100);
	}
	
	else if(D == 2){
		printf("%d\n", N * 100*100);
	}
	
	else{
		printf("%d\n", N);
	}
	
	return(0);
}