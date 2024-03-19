#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <math.h>


int ASC(const void *a, const void *b) {
	return *(int *)b - *(int *)a;//降順
}
	
int main(void)
{
	long long n, k, before;
	scanf("%lld%lld",&n,&k);
	before = n;
	int ans = n%k;
	if (ans > k - ans)
		ans = k - ans;
	printf("%d",ans);
	return 0;
} 