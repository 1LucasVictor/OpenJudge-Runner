#include<stdio.h>
int main(){
	int A, B, a = 1, b;
	scanf("%d", &A);
	scanf("%d", &B);
	for (int i = 0; i < A; i++){
		a = a * 100;
	}
  if (B == 100) B += 1;
  b = a * B;
	printf("%d", b);
}
