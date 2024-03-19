#include<stdio.h>
int main(void) {
	int A ,B,X;
	scanf("%d%d%d", &A, &B,&X);
	

	if (A > X|| (A<X&&A+B<X)) {
		printf("NO");
	}
	else if (A <= X && A + B >= X) {
		printf("YES");
	}

	return 0;
}

