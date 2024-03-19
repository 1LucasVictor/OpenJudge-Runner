#include <stdio.h>
#include <string.h>
#include <math.h>
#define rep(i,l,n) for(i=l;i<n;i++)

int main(void){
	int n,ans,a,b,c,d;

	while(scanf("%d",&n)!=EOF){
		ans=0;
		rep(a,0,10){
			rep(b,0,10){
				rep(c,0,10){
					rep(d,0,10){
						if(a+b+c+d==n) ans++;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}