#include<stdio.h>

int main(){
	int n=0,m=0;
	scanf("%d",&n);
	int t[200005]={0};
	for(int i=0;i<n-1;i++){
		scanf("%d",&m);
		t[m-1]++;
	}
	for(int i=0;i<n;i++){
		printf("%d\n",t[i]);
	}
}