#include <stdio.h>

int main(){
	long n,a,ans,max,min,sum;
	int i;
	while(scanf("%ld",&n)>0){
		if(n==0)break;
		max=0;sum=0;min=0;ans=0;
		for(i=0;i<n;i++){
			scanf("%ld",&a);
			if(a>0){
				sum+=a;
				if(max<sum){
					max=sum;
					if(ans<max-min)ans=max-min;
				}
			}else if(a<0){
				sum+=a;
				if(min>sum){
					if(ans<max-min)ans=max-min;
					max=sum;
					min=sum;
				}
			}
		}
		if(ans<max-min)ans=max-min;
		printf("%ld\n",ans);
	}
	return 0;
}