#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i,j,n,x,ans;

	while(1){
		scanf("%d",&n);
		if(n==0)break;

		ans=-100000;
		int* a = (int*)malloc(sizeof(int)*(n+1));
		a[0]=0;

		for(i=1;i<=n;i++){
			scanf("%d",&x);
			a[i]=a[i-1]+x;
		}

		for(i=0;i<n;i++){
			for(j=i+1;j<=n;j++){
				if(a[j]-a[i]>ans)ans=a[j]-a[i];
			}
		}

		free(a);
		printf("%d\n",ans);
	}

	return 0;
}