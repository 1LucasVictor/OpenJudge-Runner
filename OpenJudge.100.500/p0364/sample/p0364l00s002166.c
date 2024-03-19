#include<stdio.h>

int main(void) {

	int W, H, x, y, z;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &z);

	if (0 <= x-z && x + z<= W ) {
		if (0 <= y-z && y+ z <= H ) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	else {
		printf("No\n");
	}




	return 0;
}
