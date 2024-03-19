#include<stdio.h>
int main(){
	int A, B, T;
	scanf("%d", &A); scanf("%d", &B); scanf("%d", &T);
	int S = T / A * B;
	printf("%d", S);
}