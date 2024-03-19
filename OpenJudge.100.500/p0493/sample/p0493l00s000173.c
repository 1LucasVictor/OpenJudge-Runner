#include<stdio.h>
int main(void){
	long x;
	long y = 0;
	long z = 0;
	scanf("%ld", &x);
	y = x/500;
	z = (x-y*500)/5;
	printf("%ld\n", y*1000+z*5);
	return 0;
}