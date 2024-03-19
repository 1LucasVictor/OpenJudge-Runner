#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void){
	int a , b;
	while(scanf("%d %d\n" , &a , &b)!=EOF)
		printf("%d\n" , (int)log10(a+b) + 1);
	return 0;
}