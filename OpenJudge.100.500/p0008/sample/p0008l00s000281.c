#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char prime[1000000];
	int i,j,n,ans=0;
	prime[0]=0;prime[1]=0;
	for(i=2;i<1000000;i++){prime[i]=1;}
	for(i=2;i<1000;i++){
		if(prime[i]==1){ans++;for(j=i*i;j<1000000;j+=i)prime[j]=0;}
		prime[i]=ans;
	}
	while(scanf("%d",&n)!=EOF){printf("%d\n",prime[n]);}
	return 0;
}