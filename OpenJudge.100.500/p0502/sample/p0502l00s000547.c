#include<stdio.h>

int main(){
	int n,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		if(a%2==0){
			if(a%3==0||a%5==0){
				if(n==1)printf("APPROVED");
			}
			else {
				printf("DENIED");
				return 0;
			}
		}
	}
	return 0;
} 