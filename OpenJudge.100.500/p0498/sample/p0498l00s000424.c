#include<stdio.h>

int main(void){
	int x;
	scanf("%d", &x);
	if (x % 2 == 1){
		x = x / 2 + 1;
	}
	else {
		x = x / 2;
	}

	printf("%d", x);
}