#include<stdio.h>
int main()
{
	int A,B,T,n,m;
	m=0;
	n=0;
	scanf("%d%d%d",&A,&B,&T);
	T=T+0.5;
	m=T/A;
	n=m*B;
		printf("%d\n",n);
		return 0;
}