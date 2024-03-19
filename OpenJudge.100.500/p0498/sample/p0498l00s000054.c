#include<stdio.h>
#define rep(i,n) for(i=0; i<n; i++)

int main(void){
	int n;
	scanf("%d", &n);
	if(n%2 != 0){
		printf("%d\n", (n+1)/2);
	}else{
		printf("%d", n/2);
	}
	return 0;
}