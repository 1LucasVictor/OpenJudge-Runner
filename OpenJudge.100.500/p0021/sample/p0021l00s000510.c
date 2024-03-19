#include <stdio.h>
int n,x,s,ans;
int main(void){
	while(scanf("%d",&n)*n){
		s=0;ans=-999999;
		for(;n>0;n--){
			scanf("%d",&x);
			s+=x;
			if(s>ans)ans=s;
			if(s<0)s=0;
		}
		printf("%d\n",ans);
	}
	return 0;
}