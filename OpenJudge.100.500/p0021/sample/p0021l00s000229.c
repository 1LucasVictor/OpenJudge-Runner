#include <stdio.h>
int main(void){
	int n,a,sum,ans;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		sum=0;ans=-100000;
		while(n--){
			scanf("%d",&a);
			sum+=a;
			if(sum>ans)ans=sum;
			if(sum<0)sum=0;
		}
		printf("%d\n",ans);
	}
	return 0;
}