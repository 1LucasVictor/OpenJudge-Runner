#include<stdio.h>
int main()
{
	long long i,a,b,c=0,x,y;
	scanf("%lld %lld",&a,&b);
	for(i=0;i<a;i++){
		scanf("%lld %lld",&x,&y);
		if(x*x+y*y<=b*b){
			c++;
		}
	}
	printf("%lld\n",c);
	return 0;
}