#include<stdio.h>
int ch(int *w,int p,int n,int k)
{
	int i,t=0,c=1;
	for(i=0;i<n;i++){
		if(w[i]>p) return 0;
		if(w[i]+t>p){
			c+=1;
			t=0;
		}
		t+=w[i];
	}
	return c<=k;
}
int main(void)
{
	int m,n,k,i,w[100000];
	int l=0,r=1000000000;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){scanf("%d",&w[i]);}
	while(l<r){
		m=(l+r)/2;
		if(ch(w,m,n,k))
			r=m;
		else
			l=m+1;
	}
	printf("%d\n",r);
	return 0;
}