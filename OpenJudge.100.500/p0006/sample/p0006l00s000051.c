#include<stdio.h>

int main(void){
	int n, i;
	int x = 100000;
	scanf("%d", &n);

	for(i = 0; i < n; i++){
		x = x + x*0.05;
		if((x % 1000) != 0){
			x = x - (x % 1000) + 1000;
		}
	}

	printf("%d\n", x);

	return 0;
}