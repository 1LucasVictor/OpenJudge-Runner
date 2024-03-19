#include<stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int num[n];
	int i,temp;
	for(i = 0;i < n;i++){
		scanf("%d",&num[i]);
	}
	for(i = 0;i < (n / 2);i++){
		temp = num[i];
		num[i] = num[n - i - 1];
		num[n - i -1] = temp;
	}
	for(i = 0;i < n - 1;i++){
		printf("%d ",num[i]);
	}
	printf("%d\n",num[i]);
	return 0;
}