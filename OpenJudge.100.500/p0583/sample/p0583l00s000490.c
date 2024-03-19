#include<stdio.h>

int main(){
	int n,a,b,c,d,i;
	char s[200001];
	scanf("%d%d%d%d%d%s",&n,&a,&b,&c,&d,s);
	a--;
	b--;
	c--;
	d--;
	int dp[200011]={0},ddp[200011]={0};
	dp[b]=1;
	int f=0;
	for(i=b;i<=d;i++){
		if(dp[i]>0){
		if(s[i+1]!='#')dp[i+1]++;
		if(i<n-1&&s[i+2]!='#')dp[i+2]++;
		}
	}
	if(dp[d]==0){
		puts("No");
		return 0;
	}
	for(i=b;i<=d;i++){
		if(dp[i]==2)f=1;
	}
	if(f==0)s[d]='#';
	ddp[a]=1;
	for(i=a;i<=c;i++){
		if(ddp[i]>0){
		if(s[i+1]!='#')ddp[i+1]++;
		if(i<n-1&&s[i+2]!='#')ddp[i+2]++;
		}
	}
	if(ddp[c]==0)puts("No");
	else puts("Yes");
	return 0;
}