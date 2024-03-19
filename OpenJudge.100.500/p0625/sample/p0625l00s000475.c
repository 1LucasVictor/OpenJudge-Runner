#include <stdio.h>

int main () {
	int x, y;

	scanf("%d %d", &x, &y);
	if ( (x + y) > 16) {
		printf (":(\n");
	}
	if(x > 8 || y > 8) {
		printf (":(\n");
	}
	else{
		printf("Yay!\n");
	}
	return 0;
}