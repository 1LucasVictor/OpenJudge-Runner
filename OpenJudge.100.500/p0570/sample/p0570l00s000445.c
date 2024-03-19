#include<stdio.h>

int main(){
	long long int a,b,ans;
	scanf("%lld%lld",&a,&b);
	ans = a+b;
	if(ans%2==1){
		printf("IMPOSSIBLE");
		return 0;
	}
	else
		printf("%d",ans/2);
	return 0;
}
