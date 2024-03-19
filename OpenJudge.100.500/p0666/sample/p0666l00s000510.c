#include <stdio.h>
int main(void){
	int x, a, b;
	scanf("%d%d%d", &x, &a, &b);
	if(a >= b){
		printf("delicious");
	}else if(b > a + x){
		printf("dangerous");
	}
	else{
		printf("safe");
	}
	return 0;
}