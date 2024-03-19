#include<stdio.h>
int main() {
 
	int a;
	int b;
	int res = -1000;
 
	scanf("%d", &a);
	scanf("%d", &b);
 
	if (a + b > res) res = a + b;
	if (a - b > res) res = a - b;
	if (a * b > res) res = a * b;
 
	printf("%d", res);
 
	return 0;
}