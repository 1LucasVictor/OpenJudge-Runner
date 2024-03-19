#include<stdio.h>
int main() {
	int A, B, sum=0;
	scanf("%d %d", &A, &B);
	if(B%A == 0) {
	  sum = A + B;
	} else {
	  sum = B - A;
	}
	printf("%d", sum);
  
return 0;
}