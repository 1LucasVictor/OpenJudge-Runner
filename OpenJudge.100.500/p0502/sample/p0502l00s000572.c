#include<stdio.h>

int main(void){
	int n,i;
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]%2==0 && a[i]%3!=0 && a[i]%5!=0){
			break;
		}
	}
	
	if(i==n){
		printf("APPROVED");
	}
	else{
		printf("DENIED");
	}
	
	return 0;
}