#include <stdio.h>
#include <string.h>
#include <math.h>
#define rep(i,l,n) for(i=l;i<n;i++)

int p[1000000];
int main(void){
	int n,i,j,ans;
	rep(i,2,1000000) p[i]=1;

	rep(i,2,1000000){
		if(p[i]==1){
			rep(j,2,1000000/i){
				p[i*j]=0;
			}
		}
	}

	while(scanf("%d",&n)!=EOF){
		ans=0;
		rep(i,0,n+1){
			ans+=p[i];
		}
		printf("%d\n",ans );
	}
	
	return 0;
}