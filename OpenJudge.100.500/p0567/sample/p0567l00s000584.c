#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int A,B,C, ans = 0;
	scanf("%d %d %d", &A,&B,&C);
  ans = C - A + B;
  if (ans < 0) {
    ans = 0;
  }
  printf("%d", ans);
	return 0;
}