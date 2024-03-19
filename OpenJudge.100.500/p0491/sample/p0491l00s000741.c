#include <stdio.h>

int main(){
	
	long long int x, k;
	scanf("%d %d", &x, &k);
	if( x == 0 ){ printf("%d",k); return 0;}
	if( x%k == 0 ){ printf("0"); return 0;}
	x = x%k;
	
	if( x > k-x ) printf("%d", k-x);
	else printf("%d", x);
	
}