#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a,b,c;

	scanf("%d%d",&a,&b);

	if(a>9 || b>9){
		printf("-1");
		return EXIT_SUCCESS;
	}

	c = a*b;

	printf("%d",c);

	return EXIT_SUCCESS;
}