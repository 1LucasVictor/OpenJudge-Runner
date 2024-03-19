#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))
#define FOR(i,m,n) for(i=m;i<n;i++)


int main(void)
{
	int a,b,c,i;
	char d;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",c/a*b);
	return 0;
}