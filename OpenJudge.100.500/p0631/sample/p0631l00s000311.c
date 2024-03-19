#include <stdio.h>

int main(void) {
	int A, B, X;
	scanf("%d %d %d",&A,&B,&X);
	if(A>B){
		if(X==A)
		printf("YES");
		else
		printf("NO");
	}
	else if(A<B){
		if(X>A && X<=B)
		printf("YES");
		else
		printf("NO");
	}
	else if(A==B){
		if(X<=A && X<=B)
		printf("YES");
		else
		printf("NO");
	}
	
	return 0;
}
