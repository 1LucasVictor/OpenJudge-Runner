#include<stdio.h>
 
int main(void){
	int X,A,B;
        scanf("%d", &X);
        scanf("%d", &A);
        scanf("%d", &B);
	if (B < A) {
		printf("delicious");
	}else if (B < A+X+1){
		printf("safe");
	}else{
		printf("dangerous");
	}
}