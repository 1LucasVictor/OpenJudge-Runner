#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>

//#define rep(i,n) for(int i = 0;i<(n);i++);



int ASCttenannoryaku(const void *a,const void *b) {
	return *(int *)a - *(int *)b;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	int ans = n / 2;
	if (n % 2 == 1)ans += 1;
	printf("%d",ans);

	return 0;
}
