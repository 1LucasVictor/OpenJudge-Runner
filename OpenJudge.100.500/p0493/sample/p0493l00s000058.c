#include<stdio.h>
#include<string.h>
#include<math.h>
#define rep(i,n) for(i=0; i<n; i++)

int main(void)
{
	int x, u, k, j;
	scanf("%d", &x);
	k = x/500;
	u = k*1000;

	x -= 500*k;
	j = x/5;
	u += j*5;

	printf("%d", u);
	return 0;
}