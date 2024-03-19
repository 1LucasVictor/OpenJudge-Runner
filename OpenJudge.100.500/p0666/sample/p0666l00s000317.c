#include <stdio.h>
int main(){
	int X, A, B;
	scanf("%d",  &X);
	scanf("%d",  &A);
	scanf("%d",  &B);
	int c = X +1 +A;
	if(B <= A){
		printf("delicious\n");
	}else if(B <= c){
		printf("safe\n");
	}else{
		printf("dangerous\n");
	
	}
	return 0;
}