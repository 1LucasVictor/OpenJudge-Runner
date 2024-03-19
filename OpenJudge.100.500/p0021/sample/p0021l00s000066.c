#include <stdio.h>

int main(){
	int n,a[5010],sum,max;
	int i,j,k,l;

	while(1){
		scanf("%d",&n);
		if(n==0)break;
		for(i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		sum=0;
		for(i=0; i<n; i++){
			for(j=i; j<n; j++){
				for(k=i; k<=j; k++){
					sum+=a[k];
					if(sum<0)break;
				}
				if(i==0&&j==0)max=sum;
				if(max<sum)max=sum;
				sum=0;
			}
		}
		printf("%d\n", max);
	}


	return 0;
}