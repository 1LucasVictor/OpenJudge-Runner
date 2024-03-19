#include<stdio.h>
int main(void){
	int n,temp;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	for(int i=0;i<n-1;i++){
		scanf("%d",&temp);
		a[temp-1]++;
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}