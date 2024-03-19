#include <stdio.h>
#include <stdlib.h>


int main() {
	int A,B,X;
	scanf("%d %d %d",&A,&B,&X);
	if((B>X-A)&&(A<B)){
		printf("YES");
	}
	else {
		printf("NO");
	};
		
	return 0;
}