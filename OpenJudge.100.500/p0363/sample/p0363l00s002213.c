#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main(void)
{
	int a, b, c, min, mannaka, max;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c){
		max = a;
	}
	if (b > a && b > c){
		max = b;
	}
	if (c > a && c > b){
		max = c;
	}
	
	if (a<b && a<c){
		min = a;
	}
	if (b<a && b<c){
		min = b;
	}
	if (c<a && c<b){
		min = c;
	}

	if ((a > b && a < c) || (a>c && b > a)){
		mannaka = a;
	}
	if ((b > c && a > b) || (b > a && c > b)){
		mannaka = b;
	}
	if ((c > a && b > c) || (a > c && c > b)){
		mannaka = c;
	}

	printf("%d %d %d\n", min, mannaka, max);

	return 0;
}