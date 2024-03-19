#include<stdio.h>
#define min(a,b) ((a)<(b)?(a):(b))

int main(){
	int n,a,b,c,d,i;
	char s[200101];
	scanf("%d%d%d%d%d%s",&n,&a,&b,&c,&d,s);
	for(i=1;i<n;i++){
		if(s[i-1]=='#'&&s[i]=='#'){
			puts("No");
			return 0;
		}
	}
	a--;
	b--;
	c--;
	d--;
	int ans=0;
	int dp[200011]={0},ddp[200011]={0};
	dp[b]=1;
	int f=0;
	for(i=b;i<=d;i++){
		if(dp[i]>0){
		if(s[i+1]!='#')dp[i+1]++;
		if(s[i+2]!='#')dp[i+2]++;
		}
	}
	if(dp[d]==0){
		puts("No");
		return 0;
	}ddp[a]=1;
	for(i=a;i<=c;i++){
		if(ddp[i]>0){
		if(s[i+1]!='#')ddp[i+1]++;
		if(s[i+2]!='#')ddp[i+2]++;
		}
	}
	if(dp[c]==0){
		puts("No");
		return 0;
	}
	if(d>c){
		puts("Yes");
		return 0;
	}
	for(i=b;i<=d;i++){
		if(ddp[i]>0&&dp[i]>0&&(dp[i]==1||ddp[i]==1)&&f!=1){
			f=-1;
		}
		if(dp[i]==2&&ddp[i]==2)f=1;
	}
	if(f==1)puts("Yes");
	else puts("No");
	return 0;
	/*
	for(i=b;i<=d;i++){
		if(dp[i]==2)f=1;
	}
	if(f==0)s[d]='#';
	ddp[a]=1;
	for(i=a;i<=c;i++){
		if(ddp[i]>0){
		if(s[i+1]!='#')ddp[i+1]++;
		if(s[i+2]!='#')ddp[i+2]++;
		}
	}
	if(ddp[c]==0){
		if(f==1){
			puts("No");
			return 0;
		}
		else f=3;
	}
	else {
		puts("Yes");
		return 0;
	}
	for(i=0;i<n;i++){
		dp[i]=0;
		ddp[i]=0;
	}
	s[d]='.';
	ddp[a]=1;
	for(i=a;i<=c;i++){
		if(ddp[i]>0){
		if(s[i+1]!='#')ddp[i+1]++;
		if(s[i+2]!='#')ddp[i+2]++;
		}
	}
	if(ddp[c]==0){
		puts("No");
		return 0;
	}
	for(i=a;i<=c;i++){
		if(ddp[i]==2)f=1;
	}
	if(f==3)s[c]='#';
	dp[b]=1;
	for(i=b;i<=d;i++){
		if(dp[i]>0){
		if(s[i+1]!='#')dp[i+1]++;
		if(s[i+2]!='#')dp[i+2]++;
		}
	}
	if(dp[d]==0)puts("No");
	else puts("Yes");*/
	return 0;
}