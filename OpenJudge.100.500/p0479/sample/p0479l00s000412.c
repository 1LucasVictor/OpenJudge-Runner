#include<stdio.h>
int a[200000]={0};
int main(){
	int n,num,i;
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d",&num);
		a[num]++;
	}
	for(i=1;i<=n;i++){
		printf("%d\n",a[i]);
	}
}