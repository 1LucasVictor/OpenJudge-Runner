#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#include <stdbool.h>

int ASC( void *a,  void *b) {
	return strcmp(*(const char **)a, *(const char **)b);//降順
}
int GCD(int a, int b) {	//最大公約数
	if (b == 0) return a;
	else return GCD(b, a % b);
}
int min(int a, int b ) {
	if (a < b) {
		return a;
	}
	else
		return b;
}
int max(int a, int b) {
	if (a < b)
		return b;
	else
		return a;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	if (n >= 30) {
		printf("Yes");
	}
	else
		printf("No");
	
	
	
	return 0;
}//pd pdp
