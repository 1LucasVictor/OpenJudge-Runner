#include <stdio.h>

int main() {
	int A, B, X;
	scanf("%d %d %d",&A,&B,&X);
	if((X==A && X==B) || (X==A && X!=B))
	printf("YES");
	else if(X>A && X>B)
	printf("NO");
	else if(X>A && X<B)
	printf("YES");
	else if(X<A && X<B)
	printf("NO");
	else if(X<A && X>B)
	printf("NO");
	
	return 0;
}
