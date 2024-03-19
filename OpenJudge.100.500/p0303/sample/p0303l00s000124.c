#include<stdio.h>

#define MAX 100000

int n,k;
long long  T[MAX];

int check(long p){
	
	int i=0;
	for(int j=0;j<k;j++){
		long long s=0;
		while((s+T[i])<=p){
			s+=T[i];
			i++;
			if(i==n)return n;
		}
	}
	return i;
}

int solve(){
	long long left=0,right=100000*10000,mid;
	while(right-left>1){
		//printf("%lld ",right);
		//printf("%lld\n",left);
		mid =(right+left)/2;
		int v=check(mid);
		if(v>=n)right=mid;
		else left = mid;
	}
	return right;
}

int main(void){
	
	scanf("%lld",&n);
	scanf("%lld",&k);
	for(int i=0;i<n;i++){
		scanf("%lld",&T[i]);
	}
	
	long long ans=solve();
	printf("%lld\n",ans);
	
	return 0;
	
}
