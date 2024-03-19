#include <stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	while(n){
		int max,sum,i,t;
		max=-100001;
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&t);
			if(sum<0)
				sum=0;
			sum+=t;
			if(sum>=max)
				max=sum;
		}
		printf("%d\n",max);
		scanf("%d",&n);
	}
	return 0;
}