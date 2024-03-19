#include <stdio.h>

int n;

int solve(int a,int b)
{
	int i,sum=0;

	if(a==4) {
		return b==n;
	}
	for(i=0;i<=9;i++) {
		if(b+i<=n) {
			sum+=solve(a+1,b+i);
		}
	}
	return sum;
}

int main(void)
{
	while(scanf("%d",&n)!=EOF) {
		printf("%d\n",solve(0,0));
	}
	return 0;
}