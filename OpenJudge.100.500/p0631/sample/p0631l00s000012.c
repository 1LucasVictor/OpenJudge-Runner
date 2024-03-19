#include <stdio.h>
#include <stdlib.h>


int main() {
	int A,B,X;
	scanf("%d %d %d",&A,&B,&X);
	if((A<X)&&(A<B)){
		printf("YES");
	}
	else {
		printf("NO");
	};
		
	return 0;
}