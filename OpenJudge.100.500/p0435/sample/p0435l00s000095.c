#include<stdio.h>
int main()
{
	long long int n,d,x,y,c=0,i;
	scanf("%lld %lld",&n,&d);
	for(i=0;i<n;i++){
		scanf("%lld %lld",&x,&y);
		if(x*x+y*y<=d*d) c++;
	}
	printf("%lld\n",c);
	return 0;
}
