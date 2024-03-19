#include <stdio.h>

int main() {
	int H ;
	int A ;
	int c ;
	scanf("%d%d",&H,&A ) ;
	c = H/A ;
	c > 0 ? printf("%d", c+1 ) : printf("%d", c) ;
	return 0;
	
}