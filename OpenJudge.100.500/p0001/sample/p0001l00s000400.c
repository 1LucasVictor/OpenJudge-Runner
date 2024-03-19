#include	<stdio.h>

int main(int argc, char** argv){
	int i, j, k, x[3], y[3];
	

	for(k = 0; k < 3; k++)	scanf("%d %d", &x[k], &y[k]);
	
	for(k = 0; k < 3; k++){
		for(i = 0, j = 1;(x[k] + y[k]) / j;i++, j *= 10);
	
		printf("%d\n", i);
	}

	return 0;
}