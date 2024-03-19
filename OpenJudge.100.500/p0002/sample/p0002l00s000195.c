#include <stdio.h>
#include <math.h>
#define NUM 1000

int yes_no(int a, int b, int c);

int main(void)
{
	int n,i,a,b,c;

	for(scanf("%d",&n),i=0; i<n; i++){
		scanf("%d%d%d",&a,&b,&c);
		if(yes_no(a,b,c))
			puts("YES");
		else
			puts("NO");
	}

	return 0;
}
		


int yes_no(int a, int b, int c)
{
	a*=a;
	b*=b;
	c*=c;

	if(a+b==c)
		return 1;
	else if(b+c==a)
		return 1;
	else if(c+a==b)
		return 1;

	return 0;
}