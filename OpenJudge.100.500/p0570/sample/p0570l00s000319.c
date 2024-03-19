#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int tmp = a;
		a = b;
		b = tmp;
	}
	if((b - a) % 2){
		printf("IMPOSSIBLE\n");
		return 0;
	}
	printf("%d\n", (b + a) / 2);
	return 0;
}
