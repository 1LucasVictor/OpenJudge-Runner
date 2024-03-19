#include<stdio.h>
#define N 10000

int check(int a[],int x,int n){
	for(int i=0;i<n;i++){
		if(a[i]==x)return 1;
	}
	return 0;
}

int main(){
	int n,i,q,x;
	int a[N];
	int cnt=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	scanf("%d",&q);
	
	for(i=0;i<q;i++){
		scanf("%d",&x);
		cnt+=check(a,x,n);
	}
	
	printf("%d\n",cnt);
	
	return 0;
	
}
