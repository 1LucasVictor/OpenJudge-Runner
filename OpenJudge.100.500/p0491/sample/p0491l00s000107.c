#include <stdio.h>

long int aoki(long int x,long int k){
	if( x > k ){
		return x-k;
	} else {
		return k-x;
	}
}

int main(){
	
	long int x2;
	long int x, k;
	scanf("%d %d", &x, &k);
	if( x%k == 0 ){ printf("0"); return 0;}
	x = x%k;
	x2 = x;
	x = aoki(x,k);
	while( k-x != x2 ){ x2 = x; x = aoki(x,k);}
	printf("%d", x2>x?x:x2);
	
}