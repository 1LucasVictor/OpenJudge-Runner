#include <stdio.h>
#define MAX 100000


int n;
int k;
int W[MAX];

int check(int P){
	int i=0;
	for(int j=0;j<k;j++){
		int s=0;
		while(s+W[i]<=P){
			s+=W[i];
			i++;
			if(i==n)return n;
		}
	}
	return i;
}

int solve(){
	int left =0;
	int right =100000*100000;
	int mid;
	
	while (right-left>1){
		mid=(left+right)/2;
		int v=check(mid);
		if(v>=n){
			right=mid;
		}else{
			left =mid;
		}
	}
	return right;
}

int main(void){
	scanf("%d",&n);
	scanf("%d",&k);
	
	for(int i=0;i<n;i++){
		scanf("%d",&W[i]);
	}
	
	int ans=solve();
	
	printf("%d\n",ans);
	return 0;
}
