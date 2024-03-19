/*
AtCoder Beginner Contest 086 A - Product
Ver1

結果:
*/

#include<stdio.h>
#define DEBUG1

int main() {

	int a, b, y;

	scanf("%d %d", &a, &b);
	y = (a*b) % 2;

	if(y == 0) {
		puts("Even");
	}
	else {
		puts("Odd");
	}
//	getch();
	return 0;
}
