#include <stdio.h>
int main(void)
{
	int n,i,j=0;
	int kakaku[200000];
	long maxv = -2000000000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&kakaku[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(maxv<(kakaku[j]-kakaku[i])){
				maxv=(kakaku[j]-kakaku[i]);
			}
		}
	}
	printf("%d\n",maxv);
	return 0;
}
