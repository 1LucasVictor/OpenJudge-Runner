#include <stdio.h>
int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (A - B == 0) {
		printf("%d\n", C);	
	} else if(C > (A - B)) {
		printf("%d\n", C - (A - B));	
	} else {
		printf("%d\n", 0);
	}
	return 0;
}