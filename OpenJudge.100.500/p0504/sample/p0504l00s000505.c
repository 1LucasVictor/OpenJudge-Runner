#include <stdio.h>
#include <string.h>
int main() {
	int a ;
	int b ;
	int c ;
	scanf("%d%d",&a,&b ) ;
	c = a/b ;
	c > 0 ? printf("%d", c+1 ) : printf("%d", c) ;
	return 0;
	
}