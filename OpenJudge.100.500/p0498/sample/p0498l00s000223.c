#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	int a, b;
	a = N/2;
	b = N%2;
	if(b=0){
		printf("%d", a);
	}
	else{
		printf("%d", a+1);
	}
	return 0;
}
