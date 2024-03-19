#include <stdio.h>
#define N 10000
#define Q 500

int main(void)
{
	int i,j,n,q,c=0;
	int S[N],T[Q];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&S[i]);
	scanf("%d",&q);
	for(i=0;i<q;i++) scanf("%d",&T[i]);
	
	for(i=0;i<n;i++){
		for(j=0;j<q;j++){
			if(S[i]==T[j]) c++;
		}
	}
	printf("%d",c);
	return 0;
}