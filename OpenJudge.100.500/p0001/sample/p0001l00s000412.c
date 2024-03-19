#include <stdio.h>
#include <math.h>

int main(){
	int sum, a, b, d;

	while( scanf("%d %d", &a, &b) != EOF ){
		sum = a + b;
		for( d=1; ; d++ ){
			if( sum < pow(10,d) )
				break;
		}
		printf("%d\n", d);
	}

	return 0;
}