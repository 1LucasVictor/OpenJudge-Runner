#include <stdio.h>

int main() {

	int N;

	scanf("%d",&N);
	N%=10;
	switch(N%10) {
		case 2:
		case 4:
		case 5:
		case 7:
		case 9:
			printf("hon\n");
			break;
		case 0:
		case 1:
		case 6:
		case 8:
			printf("pon\n");
			break;
		default:
			printf("bon\n");
	}
	return 0;
}
