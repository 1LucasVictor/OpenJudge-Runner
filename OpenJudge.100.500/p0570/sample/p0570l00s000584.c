#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a, b, k=0, x, y;

	scanf("%d %d", &a, &b);

	if(a == b){
		k = 0;
		printf("%d\n",k);
	}else if ((a + b) % 2 == 0){
		k = (a + b) / 2;
		printf("%d\n",k);
	}else{
		printf("IMPOSSIBLE\n");
	}

	return 0;
}