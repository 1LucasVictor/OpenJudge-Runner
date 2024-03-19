#include <stdio.h>

int main( void )
{
	int a, b, z, i;

	while(scanf("%d %d", &a, &b)!=EOF){
		z = a + b;
		for( i=0; z!=0; i++ ){
			z/=10;
		}
		printf("%d", i);
		putchar('\n');
	}

	return 0;
}