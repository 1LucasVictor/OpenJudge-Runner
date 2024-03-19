#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define rep(i,k,n) for(int (i)=(k);(i)<(n);(i)++)
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#define abs(a) (a)>0 ?(a):-(a)
#define llong long long

int main(){
	int a,b,c,k;
	scanf("%d %d %d %d",&a,&b,&c,&k);
	int ans=0;
	ans += min(a,k);
	k -= min(a,k);
	k -= min(b,k);
	ans -= k;
	printf("%d",ans);
	return 0;
}
