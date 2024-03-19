#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>


int ASC( void *a,  void *b) {
	return strcmp(*(const char **)a, *(const char **)b);//降順
}
int GCD(int a, int b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}

int main(void)
{
	int a, b, k;
	scanf("%d%d%d",&k,&a,&b);
	for (int i = a; i <= b; i++) {
		if (i%k == 0) {
			printf("OK");
			return 0;
		}
	}
	printf("NG");
	
	return 0;
}