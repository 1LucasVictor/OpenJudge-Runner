#include<stdio.h>

int main(){
	int n,i;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		if(num[i]%2==0){
			if(num[i]%3==0||num[i]%5==0){
				if(i==n-1)printf("APPROVED");
			}
			else {
				printf("DENIED");
				return 0;
			} 
		}
		else if(i==n-1)printf("APPROVED");
	}
	return 0;
} 