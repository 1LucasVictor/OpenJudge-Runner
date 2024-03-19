#include <stdio.h>

int main(){
	int X,A,B;

	scanf("%d", &X);
	scanf("%d", &A);
	scanf("%d", &B);

	if(B - A <= 0){
		printf("delicious\n");
	}else if(B - A <= X && B - A > 0){
		printf("safe\n");
	}else if(B - A > X){
		printf("dangerous\n");
	}

	return 0;
}