#include <stdio.h>

int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	n%=k;
	if(abs(n-k)<n)
		printf("%d",abs(n-k));
	else
		printf("%d",n);
	return 0;	
}