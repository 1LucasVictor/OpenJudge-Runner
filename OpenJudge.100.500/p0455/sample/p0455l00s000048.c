#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <inttypes.h>

int compare_int(const void *a, const void *b){//qsort 整数比較<
	return *(int*)a - *(int*)b;
}
int compare_int2(const void *a, const void *b){//qsort 整数比較>
	return *(int*)b - *(int*)a;
}

int main(void){
	int a;
	int answer;

	scanf("%d",&a);
	answer=a+a*a+a*a*a;
	printf("%d",answer);
	return 0;
}
