#include<stdio.h>

int n;
int k;
int w[100000];

int check(int p){
	int i=0;
	int s;
	for(int j=0;j<k;j++){
		s=0;
		while(s+w[i]<=p){
			s+=w[i];
			i++;
			if(i==n)return n;
		}
	}
	return i;
}

int solve(){
	int left=0;
	int right=1000000000;
	int mid;
	
	while(right-left>1){
		mid=(left+right)/2;
		int v=check(mid);
		if(v>=n)right=mid;
		else left=mid;
	}
	
	return right;
}

int main(void){
	scanf("%d",&n);
	scanf("%d",&k);
	
	for(int i=0;i<n;i++)scanf("%d",&w[i]);
	
	int ans=solve();
	printf("%d\n",ans);
	
	return 0;
}

