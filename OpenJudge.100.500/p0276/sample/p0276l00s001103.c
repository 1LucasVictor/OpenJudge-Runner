#include<stdio.h>
#include<stdlib.h>

#pragma warning (disable:4996)

int main() {
	int a1[150][150] = { 0 };
	int a = 0,b=0,c=0,d=0;
	scanf("%d", &a);
	
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		scanf("%d", &c);
		if (c > 0) {
			for (int j = 0; j < c; j++) {
				scanf("%d", &d);
				a1[b - 1][d - 1] = 1;
			}
		}
		if (c == 0) {
			for (int q = 2; q < a; q++) {
				a1[i][q] = 0;
			}
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			printf("%d ", a1[i][j]);
		}
		printf("\n");
	}


	return 0;
}
