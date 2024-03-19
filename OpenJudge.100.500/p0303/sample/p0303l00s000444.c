#include <stdio.h>

int k,n,w[100000];

int check(int mid){
	int j,i=0;
	int s;
	for(j=0;j<k;j++){
		s=0;
		while(s+w[i]<=mid){
			s=s+w[i];
			i++;
			if(i==n){
				return n;
			}
		}
	}
	return i;
}

int BinarySearch(){
	int left = 0;
	int right = 10000*100000;
	int mid;
	int a;
	while(right-left>1){
		mid = (left + right) / 2;
		a=check(mid);
		if(a>=n){
			 right=mid;
		}
		else{
			left = mid;
		}
	}
	return right;
}

int main(void){
	int ans,i;
	
	scanf("%d",&n);
	scanf("%d",&k);
	
	for(i=0;i<n;i++){
		scanf("%d",&w[i]);
	}
	ans=BinarySearch();
	printf("%d\n",ans);
	return 0;
}
