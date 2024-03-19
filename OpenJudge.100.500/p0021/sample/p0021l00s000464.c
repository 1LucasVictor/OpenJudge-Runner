#include<stdio.h>

#define MAX 5000

int a[MAX],n;
int dp[MAX];

int max(int a,int b){
	if(a>=b)
		return a;
	else
		return b;
}
void solve(void){
	int res=dp[0]=a[0];
	int i;

	for(i=1;i<n;i++){
		dp[i]=max(dp[i-1]+a[i],a[i]);
		res=max(dp[i],res);
	}
	printf("%d\n",res);
	return;
}
int main(void){
	int i;
	while(1){
		scanf("%d",&n);
		if(n==0)return 0;
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		solve();
	}
}