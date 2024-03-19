#include <stdio.h>
//#include <math.h>
int main(){
	int n,i,j,ans;
	while(scanf("%d",&n)!=EOF){
		ans=1;
		for(i=2; i<=n; i++){
			for(j=2; j<i; j++){
				if(i%j==0)break;
				if(j==i-1)ans++;
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}