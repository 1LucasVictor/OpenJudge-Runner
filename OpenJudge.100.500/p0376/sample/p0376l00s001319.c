#include<stdio.h>
int main(void){
	int i,n;
	int array[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(i=n-1;i>=0;i--){
		if(i!=0){
			printf("%d ",array[i]);
		}else {
			printf("%d\n",array[i]);
		}
	}
	
	return 0;
}