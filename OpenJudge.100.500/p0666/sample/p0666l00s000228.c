#include <stdio.h>

int main(void){
	int x, a, b;
	scanf("%d %d %d", &x, &a, &b);
	if(- a + b < 1){
		printf("delicious");
	}else if(- a + b < x){
		printf("safe");
	}else{
		printf("dangerous");
	}
	return 0;
}
