#include <stdio.h>

int main(void) {
	int n, a, b,train,taxi;
	scanf("%d%d%d", &n,&a,&b);
	train = n*a;
	taxi = n*b;
	if(train<taxi){
		printf("%d", train);
	}
	else {
		printf("%d", taxi);
	}
	return 0;
}