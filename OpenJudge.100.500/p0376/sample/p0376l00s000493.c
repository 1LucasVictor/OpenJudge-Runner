#include<stdio.h>
int main(void){
	int i,n;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		scanf("%d",&num[n-i-1]);
	}
	for(i=0;i<n-1;i++){
		printf("%d ",num[i]);
	}
	printf("%d\n",num[n-1]);
	return 0;
}
