#include <stdio.h>

int main() {
	int X,Y,i;
	scanf("%d %d", &X, &Y);
	if (X * 2 <= Y && Y <= X * 4) {
		if (Y % 2 == 0) {
			printf("Yes");
		}
		else {
			printf("No");
		}
	}
	else {
		printf("No"); 
	}
	return 0;
}