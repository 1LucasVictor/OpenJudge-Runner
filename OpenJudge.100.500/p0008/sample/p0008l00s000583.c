#include <stdio.h>

int main()
{
	int i,j,n,ans;
	while(scanf("%d",&n)!=EOF){
	ans=0;
	int p[n];
	for(i=0;i<n;i++)p[i]=0;
	p[0]=1;
	for(i=2;i<=n/2;i++)for(j=2;i*j<=n;j++)if(p[i*j-1]==0)p[i*j-1]=1;
	for(i=0;i<n;i++)if(p[i]==0)ans++;
	printf("%d\n",ans);
	}
	return 0;
}