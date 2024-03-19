#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {
	int A,B,C;

	scanf("%d %d %d", &A,&B,&C);
	if (B + C > A) {
		printf("%d", B + C-A);
	}else {
		puts("0");
	}
	return 0;
}
