#include<stdio.h>
int main(void)
{
	long long  N,D,i,d,t=0,m,M;
	scanf("%lld %lld",&N,&d);
	D=d*d;
	for(i=0;i<N;i++){
		scanf("%lld %lld",&m,&M);
		if(m*m+M*M<=D){
			t++;
		}
	}
	printf("%lld\n",t);
	return 0;
}