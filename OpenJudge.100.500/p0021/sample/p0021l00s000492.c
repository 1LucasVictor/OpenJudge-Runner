#include <stdio.h>
int a[5010];

int main(){
	int n,max,sum;
	int i,j,k,l,m;

	while(1){
		scanf("%d",&n);
		if(n==0)break;
		for(i=0; i<n; i++)scanf("%d",&a[i]);
		for(i=0; i<=n; i++){
			for(j=i; j<=n; j++){
				sum=0;
				for(k=i; k<j; k++){
					sum+=a[k];
					if(sum<0)break;
				}
				if(k==0)max=sum;
				if(sum>max)max=sum;
			}
		}
		printf("%d\n",max);
	}
	return 0; 
}