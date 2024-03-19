#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>


int ASC(const void *a,const void *b) {
	return *(int *)b - *(int *)a;//降順
}
int main(void)
{
	long int n;
	long int ans = 0;
	scanf("%ld",&n);
	while (n >= 500) {
		n -= 500;
		ans += 1000;
	}
	//printf("%d\n%d\n",n,ans);
	while (n >= 5) {
		n -= 5;
		ans += 5;
	}
	printf("%ld",ans);
	return 0;
}