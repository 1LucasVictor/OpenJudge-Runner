#include <stdio.h>

int main() {
	int H ;
	int A ;
	int c ;
	int d ;
	scanf("%d%d",&H,&A ) ;
	c = H/A ;
	d = H/A + 1 ;
	
	c > 0 ? printf("%d", d ) : printf("%d", c) ;
	return 0;
	
}