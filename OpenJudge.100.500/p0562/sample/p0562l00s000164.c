#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int A,B;
	int num = 1;
	scanf("%d %d", &A,&B);
	for (int i = A; i < B; i+=A-1) {
		num++;
	}
	printf("%d\n", num);
}