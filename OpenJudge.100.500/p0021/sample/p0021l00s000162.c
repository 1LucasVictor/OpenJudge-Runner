#include <stdio.h>
#include <limits.h>

int main(void){
	int i,j,k;
	int n,pre,max;

	while(1){
		scanf("%d",&n);
		if(n==0) break;

		int x[n];
		for(i=0;i<n;i++) scanf("%d",&x[i]);
		max = INT_MIN;
		for(k=1;k<=n;k++){
			for(i=0,pre=0;i<k;i++) pre+=x[i];
			if(max < pre) max=pre;
			for(j=1;j<n-k;j++){
				pre = pre - x[j-1] + x[k+j-1];
				if(max < pre) max = pre;
			}
		}
		printf("%d\n",max);
	}
}