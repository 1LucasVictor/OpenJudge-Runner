#include<stdio.h>
#define SIZE 100000

int isOK(int n,int k,int p,int w[]){
	int i,j,sum=0;
	for(i=0;i<n;i++){
		sum+=w[i];
		if(sum>p){
			k--;i--;
			sum=0;
			if(k<=0)return -1;
		}
	}
	
	return 1;
}

int solve(int l,int r,int n,int k,int w[]){
	int mid=(l+r)/2;
	if(isOK(n,k,mid,w)==-1)return solve(mid+1,r,n,k,w);
	if(mid==l)return mid;
	return solve(l,mid,n,k,w);


}

int main(void){
	int n,k;
	int w[SIZE];
	int i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)scanf("%d",&w[i]);
	printf("%d\n",solve(0,1<<30,n,k,w));
	return 0;
}