#include<stdio.h>
int min(long long int x,long long int y){
	if(x>y)
		return y;
	else
		return x;
}

int main(){
	long long int l,r,a;
	scanf("%lld%lld",&l,&r);
	int i,j,ans=2019;
	for(i=l;i<=r;i++){
		for(j=i+1;j<=r;j++){
			a=(i*j)%2019;
			ans =min(ans,a);
		}
	}
	printf("%d",ans);
	return 0;
}
			
			
			