#include<stdio.h>
int main(void){
	int n,a[5000],i,j,k;

	while(1){
		scanf("%d",&n);
		if(n==0){break;}
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int ans=-100000,sum;

		for(i=1;i<=n;i++){
			for(j=0;j<=n-i;j++){
				sum=0;
				for(k=0;k<i;k++){
					sum+=a[j+k];
				}
				if(sum>ans){ans=sum;}
			}
		}

		printf("%d\n",ans);
	}
	return 0;
}