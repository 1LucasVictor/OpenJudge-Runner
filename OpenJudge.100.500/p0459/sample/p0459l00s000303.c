#include <stdio.h>

int main(void){
	int X, Y;
	scanf("%d %d", &X, &Y);
	if (Y % 2 != 0){
		printf("No\n");
	}
	else if (Y % 2 == 0||Y % 4 == 0||Y % 6 == 0){
		if (Y - (4 * X) < 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}