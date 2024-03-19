#include <stdio.h>

int main() {
	int H ;
	int A ;
	int c ;
	int d ;
	scanf("%d%d",&H,&A ) ;
	c = H/A ;
	d = H % A ;
	
	d > 0 ? printf("%d", c + 1 ) : printf("%d", c) ;
	return 0;
	
}