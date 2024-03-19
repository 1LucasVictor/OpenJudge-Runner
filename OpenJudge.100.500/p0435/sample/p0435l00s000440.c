#include<stdio.h>
int main()
{
	long long n,d,x,y;
	int i,c=0;
	scanf("%lld %lld",&n,&d);
	for(i=0;i<n;i++){
		scanf("%lld %lld",&x,&y);
		if(d*d>=(x*x)+(y*y)){
			c++;
		}
	}
	printf("%d\n",c);
	return 0;
}