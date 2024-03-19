#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>
#include <stdbool.h>


//using ll = long long;
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
	int a;
	scanf("%d",&a);
	while (a >= 10 ) {
		a = a % 10;
		//printf("%d", a);
	}
	int ans = a;
	if (ans == 2 || ans == 4 || ans == 5 || ans == 7 || ans == 9)
		printf("hon");
	else if (ans == 0 || ans == 1 || ans == 6 || ans == 8)
		printf("pon");
	else
		printf("bon");
	return 0;
}