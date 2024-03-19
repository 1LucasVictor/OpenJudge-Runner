#include<stdio.h>
int N,K,W[200005],i,j,r,l,m;
int bs(int p)
{
	int i,t=0,c=1;
	for(i=0;i<N;i++)
	{
		if(W[i]>p)return 0;
		if(t+W[i]>p)
		{
			c++;
			t=0;
		}
		t+=W[i];
	}
	return c<=K;
}
int main()
{
	scanf("%d%d",&N,&K);
	for(i=0;i<N;i++)
		scanf("%d",&W[i]);
	for(l=0,r=2147483647;r-l>1;)
	{
		m=(l+r)/2;
		if(bs(m))
			r=m;
		else
			l=m;
	}
	printf("%d\n",r);
	return 0;
}